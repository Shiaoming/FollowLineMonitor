#ifndef SERIALTHREAD_H
#define SERIALTHREAD_H

#include <QThread>
#include <QtSerialPort/QSerialPort>

class SerialThread : public QThread
{
	Q_OBJECT

public:
	SerialThread();
	~SerialThread();

private:
	QSerialPort *my_serialport;

public:
	void run();
	void start(const QString &name, qint32 baudRate, QSerialPort::DataBits dataBits,
		QSerialPort::Parity parity, QSerialPort::StopBits stopBits);
	void terminate();
};

#endif // SERIALTHREAD_H
