#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H

#include <QThread>
#include <QtSerialPort/QSerialPort>
#include <QTime>
#include <qtextcursor.h>

class SerialThread : public QThread
{
	Q_OBJECT

public:
	struct Settings {
		QString name;
		qint32 baudRate;
		QString stringBaudRate;
		QSerialPort::DataBits dataBits;
		QString stringDataBits;
		QSerialPort::Parity parity;
		QString stringParity;
		QSerialPort::StopBits stopBits;
		QString stringStopBits;
		QSerialPort::FlowControl flowControl;
		QString stringFlowControl;
		bool localEchoEnabled;
	};
	SerialThread();
	~SerialThread();

private:
	QSerialPort *my_serialport;
	QByteArray RecData;
	QByteArray SendData;
	ulong rx_num, tx_num;

signals:
	void error(const QString &s);
	void recdata(const QByteArray rec);

public:
	void run();
	bool start(Settings);
	void terminate();
	bool SendArray(QByteArray);
	ulong RxNumber();
	ulong TxNumber();
private slots:
	void readData();
};

#endif // SERIALTHREAD_H
