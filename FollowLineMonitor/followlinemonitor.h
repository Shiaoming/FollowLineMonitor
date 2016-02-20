#ifndef FOLLOWLINEMONITOR_H
#define FOLLOWLINEMONITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_followlinemonitor.h"
#include <qwt_legend.h>
#include <qwt_plot_curve.h>
#include <qwt_plot.h>
#include <qwt_plot_grid.h>
#include <qwt_plot_marker.h>
#include <qwt_plot_canvas.h>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
#include "serialthread.h"
#include <qmessagebox.h>
#include <qstatusbar.h>

class FollowLineMonitor : public QMainWindow
{
	Q_OBJECT

public:
	FollowLineMonitor(QWidget *parent = 0);
	~FollowLineMonitor();

private:
	void SerialInit();
	void RecTextBrowserInit();
	void SendTextBrowserInit();
	void ToHexStr(QByteArray, QString*);


private:
	Ui::FollowLineMonitorClass ui;
	//曲线   
	QwtPlotCurve * curve;
	//QwtLegend *legend;
	QwtPlotGrid *grid;
	QwtPlotMarker *d_marker1, *d_marker2;

	
	QByteArray requestData;
	QTimer *timer;

	double time[255];
	double val[255];

	//是否绘制曲线
	bool PlotFlag = false;
	//16进制接收
	bool hexRec = true;
	//16进制发送
	bool hexSend = true;
	//是否停止显示更新
	bool stopshow = false;

	//串口线程
	SerialThread serialthread;
	SerialThread::Settings currentSettings;

	//状态栏
	QStatusBar *statusbar;
	QString statusStr;

	//十六进制字符串
	QString RecStrHex;

private slots:
	void SearchCOM();
	void COMStatusUpdate();
	void StopCOM(int);
	void ClearRecData();
	void ClearSendData();
	void UpDateCheckConfig();
	void ShowCOMErr(const QString &s);
	void GetRecData(const QByteArray rec);
};

#endif // FOLLOWLINEMONITOR_H
