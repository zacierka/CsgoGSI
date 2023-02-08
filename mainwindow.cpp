#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    csgsi = CsgoGSIServer::getInstance();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//
// FUNCTION: on_serverStartBtn_clicked
// DESC: Handler for serverStartBtn
// OBJECTIVES:
//   On Pressed
//     Toggle State [Start Server, Stop Server]
//     Check to see if CSGO is open
//       Start thread with http listener
//       Create socket connection to the server
//       Send JSON over to server for processing
void MainWindow::on_serverStartBtn_clicked()
{
    QPushButton* btn = ui->serverStartBtn;

    if(server_button_state == 0)
    {
        btn->setText("Stop Server");
        server_button_state = 1;

        // send server stop event;
        if(!csgsi->isRunning())
        {
            csgsi->start();
        }
    }
    else
    {
        btn->setText("Start Server");
        server_button_state = 0;
        if(csgsi->isRunning())
        {
            csgsi->stop();
        }
    }
}


void MainWindow::closeEvent (QCloseEvent *event)
{

}
