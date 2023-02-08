#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSharedPointer>
#include "csgogsiserver.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_serverStartBtn_clicked();
    void closeEvent(QCloseEvent *event);
private:
    Ui::MainWindow *ui;

    QSharedPointer<CsgoGSIServer> csgsi;

    int server_button_state = 0;
};
#endif // MAINWINDOW_H
