#include "followlinemonitor.h"

FollowLineMonitor::FollowLineMonitor(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	statusbar = statusBar();
	setStatusBar(statusbar);

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

}

FollowLineMonitor::~FollowLineMonitor()
{

}

void FollowLineMonitor::COMStatusUpdate()
{
	//读取串口配置数据
	currentSettings.name = ui.comboBoxNum->currentText();
	currentSettings.baudRate = static_cast<QSerialPort::BaudRate>(
		ui.comboBoxBps->itemData(ui.comboBoxBps->currentIndex()).toInt());
	currentSettings.dataBits = static_cast<QSerialPort::DataBits>(
		ui.comboBoxBits->itemData(ui.comboBoxBits->currentIndex()).toInt());
	currentSettings.parity = static_cast<QSerialPort::Parity>(
		ui.comboBoxParity->itemData(ui.comboBoxParity->currentIndex()).toInt());
	currentSettings.stopBits = static_cast<QSerialPort::StopBits>(
		ui.comboBoxStopBit->itemData(ui.comboBoxStopBit->currentIndex()).toInt());

	if (serialthread.isRunning())
	{
		statusStr = QStringLiteral("串口已关闭！\t\t\t\t\t\t\t\t接收数据:%1,发送数据:%2").arg(serialthread.RxNumber()).arg(serialthread.TxNumber());
		statusbar->showMessage(statusStr);

		ui.COMButton->setText(QStringLiteral("串口已关闭,点击打开串口"));
		ui.COMButton->setIcon(QIcon(QStringLiteral(":/FollowLineMonitor/Resources/OFF.png")));
		serialthread.terminate();
		serialthread.wait();
	}
	else
	{
		if (serialthread.start(currentSettings))
		{
			statusStr = QStringLiteral("串口已打开！\t\t\t\t\t\t\t\t接收数据:%1,发送数据:%2").arg(serialthread.RxNumber()).arg(serialthread.TxNumber());
			statusbar->showMessage(statusStr);

			ui.COMButton->setText(QStringLiteral("串口已打开,点击关闭串口"));
			ui.COMButton->setIcon(QIcon(QStringLiteral(":/FollowLineMonitor/Resources/ON.png")));
		}


		//timer = new QTimer(this);
		////connect(timer, SIGNAL(timeout()), this, SLOT(updateAA()));
		//timer->start(10);
	}
}

void FollowLineMonitor::SearchCOM()
{
	///串口号遍历
	ui.comboBoxNum->clear();
	foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
		ui.comboBoxNum->addItem(info.portName());
}

void FollowLineMonitor::SerialInit()
{
	//搜索串口
	SearchCOM();
	
	///波特率
	ui.comboBoxBps->addItem(QStringLiteral("9600"), QSerialPort::Baud1200);
	ui.comboBoxBps->addItem(QStringLiteral("2400"), QSerialPort::Baud2400);
	ui.comboBoxBps->addItem(QStringLiteral("4800"), QSerialPort::Baud4800);
	ui.comboBoxBps->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
	ui.comboBoxBps->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
	ui.comboBoxBps->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
	ui.comboBoxBps->addItem(QStringLiteral("57600"), QSerialPort::Baud57600);
	ui.comboBoxBps->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);
	ui.comboBoxBps->setCurrentIndex(7);//默认显示115200

	///数据位
	ui.comboBoxBits->addItem(QStringLiteral("5"), QSerialPort::Data5);
	ui.comboBoxBits->addItem(QStringLiteral("6"), QSerialPort::Data6);
	ui.comboBoxBits->addItem(QStringLiteral("7"), QSerialPort::Data7);
	ui.comboBoxBits->addItem(QStringLiteral("8"), QSerialPort::Data8);
	ui.comboBoxBits->setCurrentIndex(3);//默认显示8

	//校验位
	ui.comboBoxParity->addItem(QStringLiteral("None"), QSerialPort::NoParity);
	ui.comboBoxParity->addItem(QStringLiteral("Even"), QSerialPort::EvenParity);
	ui.comboBoxParity->addItem(QStringLiteral("Odd"), QSerialPort::OddParity);
	ui.comboBoxParity->addItem(QStringLiteral("Mark"), QSerialPort::MarkParity);
	ui.comboBoxParity->addItem(QStringLiteral("Space"), QSerialPort::SpaceParity);

	//停止位
	ui.comboBoxStopBit->addItem(QStringLiteral("1"), QSerialPort::OneStop);
#ifdef Q_OS_WIN
	ui.comboBoxStopBit->addItem(QStringLiteral("1.5"), QSerialPort::OneAndHalfStop);
#endif
	ui.comboBoxStopBit->addItem(QStringLiteral("2"), QSerialPort::TwoStop);

	//信号与槽连接
	connect(ui.COMButton, SIGNAL(clicked()), this, SLOT(COMStatusUpdate()));
	connect(ui.comboBoxNum, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxBps, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxBits, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxParity, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.comboBoxStopBit, SIGNAL(currentIndexChanged(int)), this, SLOT(StopCOM(int)));
	connect(ui.ResearchCom, SIGNAL(clicked()), this, SLOT(SearchCOM()));
	connect(&serialthread, SIGNAL(error(QString)), this, SLOT(ShowCOMErr(QString)));

	statusStr = QStringLiteral("串口已关闭！\t\t\t\t\t\t\t\t接收数据:%1,发送数据:%2").arg(0).arg(0);
	statusbar->showMessage(statusStr);
}

void FollowLineMonitor::StopCOM(int i)
{
	if (serialthread.isRunning())
	{
		statusStr = QStringLiteral("串口已关闭！\t\t\t\t\t\t\t\t接收数据:%1,发送数据:%2").arg(serialthread.RxNumber()).arg(serialthread.TxNumber());
		statusbar->showMessage(statusStr);

		ui.COMButton->setText(QStringLiteral("串口已关闭,点击打开串口"));
		ui.COMButton->setIcon(QIcon(QStringLiteral(":/FollowLineMonitor/Resources/OFF.png")));
		serialthread.terminate();
		serialthread.wait();
	}
}

void FollowLineMonitor::RecTextBrowserInit()
{
	connect(ui.checkBoxStopShow, SIGNAL(stateChanged(int)), this, SLOT(UpDateCheckConfig()));
	connect(ui.checkBoxPlot, SIGNAL(stateChanged(int)), this, SLOT(UpDateCheckConfig()));
	connect(ui.checkBoxHexShow, SIGNAL(stateChanged(int)), this, SLOT(UpDateCheckConfig()));
	connect(ui.checkBoxHexSend, SIGNAL(stateChanged(int)), this, SLOT(UpDateCheckConfig()));
	connect(ui.clearRecButton, SIGNAL(clicked()), this, SLOT(ClearRecData()));
	connect(&serialthread, SIGNAL(recdata(QByteArray)), this, SLOT(GetRecData(QByteArray)));
	ClearRecData();
}

void FollowLineMonitor::SendTextBrowserInit()
{
	connect(ui.checkBoxHexSend, SIGNAL(stateChanged()), this, SLOT(UpDateCheckConfig()));
	connect(ui.clearSendButton, SIGNAL(clicked()), this, SLOT(ClearSendData()));
	ClearSendData();
}

void FollowLineMonitor::ClearRecData()
{
	requestData.clear();
	RecStrHex.clear();
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

	if (ui.checkBoxStopShow->isChecked())
		stopshow = true;
	else
		stopshow = false;
}

void FollowLineMonitor::ShowCOMErr(const QString &s)
{
	QMessageBox::critical(this, QStringLiteral("串口错误"), s);
}

void FollowLineMonitor::GetRecData(const QByteArray rec)
{
	//获取新的串口数据追加至末尾
	requestData.append(rec);

	//允许继续显示，若不停刷新文本对性能影响较大
	if (!stopshow)
	{
		if (hexRec)
		{
			ToHexStr(requestData, &RecStrHex);
			ui.Rectext->setText(RecStrHex);
		}
		else
			ui.Rectext->setText(requestData);

		//光标移至末尾，实现自动滚动
		ui.Rectext->moveCursor(QTextCursor::End);
	}
	statusStr=QStringLiteral("串口已打开！\t\t\t\t\t\t\t\t接收数据:%1,发送数据:%2").arg(serialthread.RxNumber()).arg(serialthread.TxNumber());
	statusbar->showMessage(statusStr);
}

//十六进制显示
void FollowLineMonitor::ToHexStr(QByteArray input, QString *output)
{
	if (input.length() != 0)
	{
		QString tmpStr;
		for (int i = 0; i < input.length(); i++)
		{
			if (output->size()==0)
				tmpStr.sprintf("%2X", (unsigned char)input.at(i));
			else
				tmpStr.sprintf(" %2X", (unsigned char)input.at(i));
			output->append(tmpStr);
		}
	}
}