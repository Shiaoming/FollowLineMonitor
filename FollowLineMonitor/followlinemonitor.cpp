#include "followlinemonitor.h"

FollowLineMonitor::FollowLineMonitor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	QwtPlotCanvas *canvas = new QwtPlotCanvas();

	canvas->setBorderRadius(10);



	for (int i = 0; i < 255; i++)
	{
		time[i] = i;
		val[i] = i;
	}

	ui.setupUi(this);

	//实例化
	curve = new QwtPlotCurve("Acc_X");
	curve->setRenderHint(QwtPlotItem::RenderAntialiased);
	curve->setPen(Qt::darkGreen, 1);
	curve->setLegendAttribute(QwtPlotCurve::LegendShowLine);
	curve->setYAxis(QwtPlot::yLeft);
	//加载数据
	curve->setSamples(time, val, 255);
	//加到plot，plot由IDE创建
	curve->attach(ui.qwtPlot);

	//串口初始化配置
	SerialInit();
	RecTextBrowserInit();
	SendTextBrowserInit();

	//串口线程初始化
	serialthread = new SerialThread;
}

FollowLineMonitor::~FollowLineMonitor()
{

}

void FollowLineMonitor::COMStatusUpdate()
{
	QString tmp;
	int tmpnum;
	QString name;
	qint32 baudRate;
	QSerialPort::DataBits dataBits;
	QSerialPort::Parity parity;
	QSerialPort::StopBits stopBits;

	name = ui.comboBoxNum->currentText();

	tmp = ui.comboBoxBps->currentText();
	baudRate = tmp.toInt();

	tmp = ui.comboBoxBits->currentText();
	tmpnum = tmp.toInt();
	dataBits = (QSerialPort::DataBits)tmpnum;

	tmp = ui.comboBoxParity->currentIndex();
	tmpnum = tmp.toInt();
	switch (tmpnum)
	{
	case 0:
		parity = QSerialPort::NoParity;
		break;
	case 1:
		parity = QSerialPort::EvenParity;
		break;
	case 2:
		parity = QSerialPort::OddParity;
		break;
	default:
		break;
	}

	tmp = ui.comboBoxStopBit->currentIndex();
	tmpnum = tmp.toInt();
	if (tmpnum == 1.5)tmpnum = 3;
	stopBits = (QSerialPort::StopBits)tmpnum;

	



	if (serialthread->isRunning())
	{
		ui.COMButton->setText(QStringLiteral("串口已关闭,点击打开串口"));
		ui.COMButton->setIcon(QIcon(QStringLiteral(":/FollowLineMonitor/Resources/OFF.png")));
		serialthread->terminate();
		serialthread->wait();
	}
	else
	{
		ui.COMButton->setText(QStringLiteral("串口已打开,点击关闭串口"));
		ui.COMButton->setIcon(QIcon(QStringLiteral(":/FollowLineMonitor/Resources/ON.png")));
		serialthread->start(name, baudRate, dataBits, parity,stopBits);

		//timer = new QTimer(this);
		////connect(timer, SIGNAL(timeout()), this, SLOT(updateAA()));
		//timer->start(10);
	}
}

void FollowLineMonitor::SerialInit()
{
	///串口号遍历
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
	{
		QSerialPort serial;
		serial.setPort(info);
		if (serial.open(QIODevice::ReadWrite))
		{
			ui.comboBoxNum->addItem(info.portName());
			serial.close();
		}
	}
	///波特率
	QString BpsStr;
	ui.comboBoxBps->addItem(BpsStr.setNum(1200));
	ui.comboBoxBps->addItem(BpsStr.setNum(2400));
	ui.comboBoxBps->addItem(BpsStr.setNum(4800));
	ui.comboBoxBps->addItem(BpsStr.setNum(9600));
	ui.comboBoxBps->addItem(BpsStr.setNum(19200));
	ui.comboBoxBps->addItem(BpsStr.setNum(38400));
	ui.comboBoxBps->addItem(BpsStr.setNum(57600));
	ui.comboBoxBps->addItem(BpsStr.setNum(115200));
	ui.comboBoxBps->setCurrentIndex(7);//默认显示115200

	///数据位
	QString BitsStr;
	ui.comboBoxBits->addItem(BitsStr.setNum(5));
	ui.comboBoxBits->addItem(BitsStr.setNum(6));
	ui.comboBoxBits->addItem(BitsStr.setNum(7));
	ui.comboBoxBits->addItem(BitsStr.setNum(8));
	ui.comboBoxBits->setCurrentIndex(3);//默认显示8

	//校验位
	QString ParityStr;
	ui.comboBoxParity->addItem(ParityStr.sprintf("None"));
	ui.comboBoxParity->addItem(ParityStr.sprintf("Even"));
	ui.comboBoxParity->addItem(ParityStr.sprintf("Odd"));

	//校验位
	QString StopStr;
	ui.comboBoxStopBit->addItem(StopStr.setNum(1));
	ui.comboBoxStopBit->addItem(StopStr.setNum(1.5));
	ui.comboBoxStopBit->addItem(StopStr.setNum(2));

	//信号与槽连接
	connect(ui.COMButton, SIGNAL(clicked()), this, SLOT(COMStatusUpdate()));
	connect(ui.comboBoxNum, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxBps, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxBits, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxParity, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxStopBit, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
}

void FollowLineMonitor::StopCOM(int i)
{
	if (serialthread->isRunning())
	{
		ui.COMButton->setText(QStringLiteral("串口已关闭,点击打开串口"));
		ui.COMButton->setIcon(QIcon(QStringLiteral(":/FollowLineMonitor/Resources/OFF.png")));
		serialthread->terminate();
		serialthread->wait();
	}
}

void FollowLineMonitor::RecTextBrowserInit()
{
	if (PlotFlag)
		ui.checkBoxPlot->setChecked(true);
	else
		ui.checkBoxPlot->setChecked(false);

	if (hexRec)
		ui.checkBoxHexShow->setChecked(true);
	else
		ui.checkBoxHexShow->setChecked(false);

	connect(ui.checkBoxPlot, SIGNAL(stateChanged()), this, SLOT(UpDateCheckConfig()));
	connect(ui.checkBoxHexShow, SIGNAL(stateChanged()), this, SLOT(UpDateCheckConfig()));
	connect(ui.clearRecButton, SIGNAL(clicked()), this, SLOT(ClearRecData()));
	ClearRecData();
}

void FollowLineMonitor::SendTextBrowserInit()
{
	if (hexSend)
		ui.checkBoxHexSend->setChecked(true);
	else
		ui.checkBoxHexSend->setChecked(false);

	connect(ui.checkBoxHexSend, SIGNAL(stateChanged()), this, SLOT(UpDateCheckConfig()));
	connect(ui.clearSendButton, SIGNAL(clicked()), this, SLOT(ClearSendData()));
	ClearSendData();
}

void FollowLineMonitor::ClearRecData()
{
	ui.Rectext->clear();
}

void FollowLineMonitor::ClearSendData()
{
	ui.Sendtext->clear();
}

void FollowLineMonitor::UpDateCheckConfig()
{
	if (ui.checkBoxPlot->isChecked())
		PlotFlag = true;
	else
		PlotFlag = false;

	if (ui.checkBoxHexShow->isChecked())
		hexRec = true;
	else
		hexRec = false;

	if (ui.checkBoxHexSend->isChecked())
		hexSend = true;
	else
		hexSend = false;
}