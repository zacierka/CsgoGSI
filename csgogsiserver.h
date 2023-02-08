#ifndef CSGOGSISERVER_H
#define CSGOGSISERVER_H
#include <QSharedPointer>
#include <QObject>
class CsgoGSIServer
{
public:
    CsgoGSIServer(CsgoGSIServer const&) = delete;
    CsgoGSIServer& operator=(CsgoGSIServer const&) = delete;

    static QSharedPointer<CsgoGSIServer> getInstance()
    {
        static QSharedPointer<CsgoGSIServer> server{new CsgoGSIServer()};
        return server;
    }


    void start();
    void stop();
    bool isRunning();
private:
    CsgoGSIServer();
    bool state;
};

#endif // CSGOGSISERVER_H
