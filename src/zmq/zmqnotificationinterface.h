// Copyright (c) 2017-2018 STRAKS developers
// Copyright (c) 2018 SECI Core Developers
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

#ifndef SECI_ZMQ_ZMQNOTIFICATIONINTERFACE_H
#define SECI_ZMQ_ZMQNOTIFICATIONINTERFACE_H

#include "validationinterface.h"
#include <string>
#include <map>

class CBlockIndex;
class CZMQAbstractNotifier;

class CZMQNotificationInterface : public CValidationInterface
{
public:
    virtual ~CZMQNotificationInterface();

    static CZMQNotificationInterface* Create();

protected:
    bool Initialize();
    void Shutdown();

    // CValidationInterface
    void SyncTransaction(const CTransaction& tx, const CBlockIndex *pindex, int posInBlock);
    void UpdatedBlockTip(const CBlockIndex *pindexNew, const CBlockIndex *pindexFork, bool fInitialDownload);

private:
    CZMQNotificationInterface();

    void *pcontext;
    std::list<CZMQAbstractNotifier*> notifiers;
};

#endif // SECI_ZMQ_ZMQNOTIFICATIONINTERFACE_H
