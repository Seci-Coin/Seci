
// Copyright (c) 2017-2018 STRAKS developers
// Copyright (c) 2018 SECI Core Developers
// Copyright (c) 2017 SECI developers

//! This file is generated by share/qt/extract_strings_qt.py

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *seci_strings[] = {
QT_TRANSLATE_NOOP("seci-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=secirpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"seci Alert\" admin@foo."
"com\n"),
QT_TRANSLATE_NOOP("seci-core", ""
"Acceptable ciphers (default: TLSv1.2+HIGH:TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!"
"3DES:@STRENGTH)"),
QT_TRANSLATE_NOOP("seci-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv4: %s"),
QT_TRANSLATE_NOOP("seci-core", ""
"An error occurred while setting up the RPC port %u for listening on IPv6, "
"falling back to IPv4: %s"),
QT_TRANSLATE_NOOP("seci-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("seci-core", ""
"Cannot obtain a lock on data directory %s. seci Core is probably already "
"running."),
QT_TRANSLATE_NOOP("seci-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:15)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Darksend uses exact denominated amounts to send funds, you might simply need "
"to anonymize some more coins."),
QT_TRANSLATE_NOOP("seci-core", ""
"Disable all Masternode and Darksend related functionality (0-1, default: 0)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Enable instantx, show confirmations for locked transactions (bool, default: "
"true)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Enable use of automated darksend for funds stored in this wallet (0-1, "
"default: 0)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly. This is intended for regression testing tools and app "
"development."),
QT_TRANSLATE_NOOP("seci-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("seci-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("seci-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("seci-core", ""
"Error: Wallet unlocked for anonymization only, unable to create transaction."),
QT_TRANSLATE_NOOP("seci-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Fees smaller than this are considered zero fee (for transaction creation) "
"(default:"),
QT_TRANSLATE_NOOP("seci-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: 100)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("seci-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: 3)"),
QT_TRANSLATE_NOOP("seci-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("seci-core", ""
"InstantX requires inputs with at least 6 confirmations, you might need to "
"wait a few minutes and try again."),
QT_TRANSLATE_NOOP("seci-core", ""
"Listen for JSON-RPC connections on <port> (default: 8800 or testnet: 8884)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Name to construct url for KeePass entry that stores the wallet passphrase"),
QT_TRANSLATE_NOOP("seci-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Output debugging information (default: 0, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Provide liquidity to Darksend by infrequently mixing coins on a continual "
"basis (0-100, default: 0, 1=very frequent, high fees, 100=very infrequent, "
"low fees)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Set external address:port to get to this masternode (example: address:port)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Set the processor limit for when generation is on (-1 = unlimited, default: "
"-1)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Show N confirmations for a successfully locked transaction (0-9999, default: "
"1)"),
QT_TRANSLATE_NOOP("seci-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("seci-core", ""
"Unable to bind to %s on this computer. seci Core is probably already "
"running."),
QT_TRANSLATE_NOOP("seci-core", ""
"Unable to locate enough Darksend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("seci-core", ""
"Unable to locate enough Darksend non-denominated funds for this transaction "
"that are not equal 1000 SECI."),
QT_TRANSLATE_NOOP("seci-core", ""
"Unable to locate enough Darksend non-denominated funds for this transaction."),
QT_TRANSLATE_NOOP("seci-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: -"
"proxy)"),
QT_TRANSLATE_NOOP("seci-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("seci-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong seci will not work properly."),
QT_TRANSLATE_NOOP("seci-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("seci-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("seci-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("seci-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("seci-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("seci-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("seci-core", "(default: 1)"),
QT_TRANSLATE_NOOP("seci-core", "(default: wallet.dat)"),
QT_TRANSLATE_NOOP("seci-core", "<category> can be:"),
QT_TRANSLATE_NOOP("seci-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("seci-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("seci-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("seci-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("seci-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("seci-core", "Already have that input."),
QT_TRANSLATE_NOOP("seci-core", "Always query for peer addresses via DNS lookup (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("seci-core", "Block creation options:"),
QT_TRANSLATE_NOOP("seci-core", "Can't denominate: no compatible inputs left."),
QT_TRANSLATE_NOOP("seci-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("seci-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("seci-core", "Clear list of wallet transactions (diagnostic tool; implies -rescan)"),
QT_TRANSLATE_NOOP("seci-core", "Collateral is not valid."),
QT_TRANSLATE_NOOP("seci-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("seci-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("seci-core", "Connect through SOCKS proxy"),
QT_TRANSLATE_NOOP("seci-core", "Connect to JSON-RPC on <port> (default: 8800 or testnet: 8884)"),
QT_TRANSLATE_NOOP("seci-core", "Connect to KeePassHttp on port <port> (default: 19455)"),
QT_TRANSLATE_NOOP("seci-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("seci-core", "Connection options:"),
QT_TRANSLATE_NOOP("seci-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("seci-core", "seci Core Daemon"),
QT_TRANSLATE_NOOP("seci-core", "seci Core RPC client version"),
QT_TRANSLATE_NOOP("seci-core", "Darksend is disabled."),
QT_TRANSLATE_NOOP("seci-core", "Darksend options:"),
QT_TRANSLATE_NOOP("seci-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("seci-core", "Disable safemode, override a real safe mode event (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("seci-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("seci-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("seci-core", "Done loading"),
QT_TRANSLATE_NOOP("seci-core", "Downgrading and trying again."),
QT_TRANSLATE_NOOP("seci-core", "Enable the client to act as a masternode (0-1, default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Entries are full."),
QT_TRANSLATE_NOOP("seci-core", "Error connecting to masternode."),
QT_TRANSLATE_NOOP("seci-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("seci-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("seci-core", "Error loading block database"),
QT_TRANSLATE_NOOP("seci-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("seci-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("seci-core", "Error loading wallet.dat: Wallet requires newer version of seci"),
QT_TRANSLATE_NOOP("seci-core", "Error opening block database"),
QT_TRANSLATE_NOOP("seci-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("seci-core", "Error recovering public key."),
QT_TRANSLATE_NOOP("seci-core", "Error"),
QT_TRANSLATE_NOOP("seci-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("seci-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("seci-core", "Error: You already have pending entries in the Darksend pool"),
QT_TRANSLATE_NOOP("seci-core", "Error: system error: "),
QT_TRANSLATE_NOOP("seci-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("seci-core", "Failed to read block info"),
QT_TRANSLATE_NOOP("seci-core", "Failed to read block"),
QT_TRANSLATE_NOOP("seci-core", "Failed to sync block index"),
QT_TRANSLATE_NOOP("seci-core", "Failed to write block index"),
QT_TRANSLATE_NOOP("seci-core", "Failed to write block info"),
QT_TRANSLATE_NOOP("seci-core", "Failed to write block"),
QT_TRANSLATE_NOOP("seci-core", "Failed to write file info"),
QT_TRANSLATE_NOOP("seci-core", "Failed to write to coin database"),
QT_TRANSLATE_NOOP("seci-core", "Failed to write transaction index"),
QT_TRANSLATE_NOOP("seci-core", "Failed to write undo data"),
QT_TRANSLATE_NOOP("seci-core", "Fee per kB to add to transactions you send"),
QT_TRANSLATE_NOOP("seci-core", "Fees smaller than this are considered zero fee (for relaying) (default:"),
QT_TRANSLATE_NOOP("seci-core", "Force safe mode (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Generate coins (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Get help for a command"),
QT_TRANSLATE_NOOP("seci-core", "How many blocks to check at startup (default: 288, 0 = all)"),
QT_TRANSLATE_NOOP("seci-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("seci-core", "Ignore masternodes less than version (example: 70050; default : 0)"),
QT_TRANSLATE_NOOP("seci-core", "Importing..."),
QT_TRANSLATE_NOOP("seci-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("seci-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("seci-core", "Incompatible version."),
QT_TRANSLATE_NOOP("seci-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("seci-core", "Information"),
QT_TRANSLATE_NOOP("seci-core", "Initialization sanity check failed. seci Core is shutting down."),
QT_TRANSLATE_NOOP("seci-core", "Input is not valid."),
QT_TRANSLATE_NOOP("seci-core", "InstantX options:"),
QT_TRANSLATE_NOOP("seci-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("seci-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("seci-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Invalid amount"),
QT_TRANSLATE_NOOP("seci-core", "Invalid masternodeprivkey. Please see documenation."),
QT_TRANSLATE_NOOP("seci-core", "Invalid private key."),
QT_TRANSLATE_NOOP("seci-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("seci-core", "KeePassHttp id for the established association"),
QT_TRANSLATE_NOOP("seci-core", "KeePassHttp key for AES encrypted communication with KeePass"),
QT_TRANSLATE_NOOP("seci-core", "Keep N seci anonymized (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Keep at most <n> unconnectable blocks in memory (default: %u)"),
QT_TRANSLATE_NOOP("seci-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("seci-core", "Last Darksend was too recent."),
QT_TRANSLATE_NOOP("seci-core", "Last successful darksend action was too recent."),
QT_TRANSLATE_NOOP("seci-core", "Limit size of signature cache to <n> entries (default: 50000)"),
QT_TRANSLATE_NOOP("seci-core", "List commands"),
QT_TRANSLATE_NOOP("seci-core", "Listen for connections on <port> (default: 9819 or testnet: 9829)"),
QT_TRANSLATE_NOOP("seci-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("seci-core", "Loading block index..."),
QT_TRANSLATE_NOOP("seci-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("seci-core", "Loading wallet... (%3.2f %%)"),
QT_TRANSLATE_NOOP("seci-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("seci-core", "Log transaction priority and fee per kB when mining blocks (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Maintain a full transaction index (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("seci-core", "Masternode options:"),
QT_TRANSLATE_NOOP("seci-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("seci-core", "Masternode:"),
QT_TRANSLATE_NOOP("seci-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 5000)"),
QT_TRANSLATE_NOOP("seci-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 1000)"),
QT_TRANSLATE_NOOP("seci-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("seci-core", "No compatible masternode found."),
QT_TRANSLATE_NOOP("seci-core", "No funds detected in need of denominating."),
QT_TRANSLATE_NOOP("seci-core", "No masternodes detected."),
QT_TRANSLATE_NOOP("seci-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("seci-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("seci-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("seci-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("seci-core", "Not in the masternode list."),
QT_TRANSLATE_NOOP("seci-core", "Only accept block chain matching built-in checkpoints (default: 1)"),
QT_TRANSLATE_NOOP("seci-core", "Only connect to nodes in network <net> (IPv4, IPv6 or Tor)"),
QT_TRANSLATE_NOOP("seci-core", "Options:"),
QT_TRANSLATE_NOOP("seci-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("seci-core", "Prepend debug output with timestamp (default: 1)"),
QT_TRANSLATE_NOOP("seci-core", "Print block on startup, if found in block index"),
QT_TRANSLATE_NOOP("seci-core", "Print block tree on startup (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "RPC SSL options: (see the seci Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("seci-core", "RPC client options:"),
QT_TRANSLATE_NOOP("seci-core", "RPC server options:"),
QT_TRANSLATE_NOOP("seci-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("seci-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("seci-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("seci-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("seci-core", "Rescanning..."),
QT_TRANSLATE_NOOP("seci-core", "Run a thread to flush wallet periodically (default: 1)"),
QT_TRANSLATE_NOOP("seci-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("seci-core", "SSL options: (see the seci Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("seci-core", "Select SOCKS version for -proxy (4 or 5, default: 5)"),
QT_TRANSLATE_NOOP("seci-core", "Send command to seci Core"),
QT_TRANSLATE_NOOP("seci-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("seci-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("seci-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("seci-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("seci-core", "Session not complete!"),
QT_TRANSLATE_NOOP("seci-core", "Session timed out (30 seconds), please resubmit."),
QT_TRANSLATE_NOOP("seci-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("seci-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("seci-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("seci-core", "Set minimum block size in bytes (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Set the masternode private key"),
QT_TRANSLATE_NOOP("seci-core", "Set the number of threads to service RPC calls (default: 4)"),
QT_TRANSLATE_NOOP("seci-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: 1)"),
QT_TRANSLATE_NOOP("seci-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("seci-core", "Show benchmark information (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("seci-core", "Signing failed."),
QT_TRANSLATE_NOOP("seci-core", "Signing timed out, please resubmit."),
QT_TRANSLATE_NOOP("seci-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("seci-core", "Specify configuration file (default: seci.conf)"),
QT_TRANSLATE_NOOP("seci-core", "Specify connection timeout in milliseconds (default: 5000)"),
QT_TRANSLATE_NOOP("seci-core", "Specify data directory"),
QT_TRANSLATE_NOOP("seci-core", "Specify masternode configuration file (default: masternode.conf)"),
QT_TRANSLATE_NOOP("seci-core", "Specify pid file (default: secid.pid)"),
QT_TRANSLATE_NOOP("seci-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("seci-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("seci-core", "Spend unconfirmed change when sending transactions (default: 1)"),
QT_TRANSLATE_NOOP("seci-core", "Start seci Core Daemon"),
QT_TRANSLATE_NOOP("seci-core", "System error: "),
QT_TRANSLATE_NOOP("seci-core", "This help message"),
QT_TRANSLATE_NOOP("seci-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("seci-core", "This is not a masternode."),
QT_TRANSLATE_NOOP("seci-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("seci-core", "To use the %s option"),
QT_TRANSLATE_NOOP("seci-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("seci-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("seci-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("seci-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("seci-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("seci-core", "Transaction too large"),
QT_TRANSLATE_NOOP("seci-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("seci-core", "Unable to sign masternode payment winner, wrong key?"),
QT_TRANSLATE_NOOP("seci-core", "Unable to sign spork message, wrong key?"),
QT_TRANSLATE_NOOP("seci-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("seci-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("seci-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("seci-core", "Usage (deprecated, use seci-cli):"),
QT_TRANSLATE_NOOP("seci-core", "Usage:"),
QT_TRANSLATE_NOOP("seci-core", "Use KeePass 2 integration using KeePassHttp plugin (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Use N separate masternodes to anonymize funds  (2-8, default: 2)"),
QT_TRANSLATE_NOOP("seci-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("seci-core", "Use UPnP to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("seci-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("seci-core", "Use the test network"),
QT_TRANSLATE_NOOP("seci-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("seci-core", "Value more than Darksend pool maximum allows."),
QT_TRANSLATE_NOOP("seci-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("seci-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("seci-core", "Wait for RPC server to start"),
QT_TRANSLATE_NOOP("seci-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("seci-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("seci-core", "Wallet needed to be rewritten: restart seci to complete"),
QT_TRANSLATE_NOOP("seci-core", "Wallet options:"),
QT_TRANSLATE_NOOP("seci-core", "Warning"),
QT_TRANSLATE_NOOP("seci-core", "Warning: Deprecated argument -debugnet ignored, use -debug=net"),
QT_TRANSLATE_NOOP("seci-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("seci-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("seci-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("seci-core", "on startup"),
QT_TRANSLATE_NOOP("seci-core", "version"),
QT_TRANSLATE_NOOP("seci-core", "wallet.dat corrupt, salvage failed"),
};
