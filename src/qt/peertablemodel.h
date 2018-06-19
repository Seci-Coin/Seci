// Copyright (c) 2017-2018 STRAKS developers
// Copyright (c) 2018 SECI Core Developers
// Distributed under the MIT software license, see the accompanying
// file LICENSE or http://www.opensource.org/licenses/mit-license.php.

#ifndef SECI_QT_PEERTABLEMODEL_H
#define SECI_QT_PEERTABLEMODEL_H

#include "net_processing.h" // For CNodeStateStats
#include "net.h"

#include <QAbstractTableModel>
#include <QStringList>

class ClientModel;
class PeerTablePriv;

QT_BEGIN_NAMESPACE
class QTimer;
QT_END_NAMESPACE

struct CNodeCombinedStats {
    CNodeStats nodeStats;
    CNodeStateStats nodeStateStats;
    bool fNodeStateStatsAvailable;
};

class NodeLessThan
{
public:
    NodeLessThan(int nColumn, Qt::SortOrder fOrder) :
        column(nColumn), order(fOrder) {}
    bool operator()(const CNodeCombinedStats &left, const CNodeCombinedStats &right) const;

private:
    int column;
    Qt::SortOrder order;
};

/**
   Qt model providing information about connected peers, similar to the
   "getpeerinfo" RPC call. Used by the rpc console UI.
 */
class PeerTableModel : public QAbstractTableModel
{
    Q_OBJECT

public:
    explicit PeerTableModel(ClientModel *parent = 0);
    ~PeerTableModel();
    const CNodeCombinedStats *getNodeStats(int idx);
    int getRowByNodeId(NodeId nodeid);
    void startAutoRefresh();
    void stopAutoRefresh();

    enum ColumnIndex {
        NetNodeId = 0,
        Address = 1,
        Subversion = 2,
        Ping = 3
    };

    /** @name Methods overridden from QAbstractTableModel
        @{*/
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    QModelIndex index(int row, int column, const QModelIndex &parent) const;
    Qt::ItemFlags flags(const QModelIndex &index) const;
    void sort(int column, Qt::SortOrder order);
    /*@}*/

public Q_SLOTS:
    void refresh();

private:
    ClientModel *clientModel;
    QStringList columns;
    std::unique_ptr<PeerTablePriv> priv;
    QTimer *timer;
};

#endif // SECI_QT_PEERTABLEMODEL_H
