#include "csgogsiserver.h"

CsgoGSIServer::CsgoGSIServer()
    :state(false)
{
    qInfo("%s: Creating Instance", __PRETTY_FUNCTION__);
}

/**
 * @brief Starts a thread containing an active http server listening to csgo gsi traffic
 */
void CsgoGSIServer::start()
{
    qInfo("%s: Starting Server", __PRETTY_FUNCTION__);
    state = true;

    //HTTP SERVER START HERE
}

/**
 * @brief Stops the active thread running the http server
 */
void CsgoGSIServer::stop()
{
    qInfo("%s: Stopping Server", __PRETTY_FUNCTION__);
    state = false;

    //HTTP SERVER STOP HERE
}

/**
 * @brief The state of the http server
 * @return running state
 */
bool CsgoGSIServer::isRunning()
{
    return this->state;
}
