#include <rpc/server.h>
#include <utilstrencodings.h>
#include <rpc/register.h>

json  getconnectioncount(const JSONRPCRequest& request)
{
    /*if (request.fHelp || request.params.size() != 1) {
        throw std::runtime_error(
                "setnetworkactive true|false\n"
                "\nDisable/enable all p2p network activity.\n"
                "\nArguments:\n"
                "1. \"state\"        (boolean, required) true to enable networking, false to disable\n"
                );
    }*/


    json json_result;
    json_result["result"] = "this is test";
    return json_result;
}






static const CRPCCommand commands[] =
{ //  category              name                      actor (function)         argNames
    //  --------------------- ------------------------  -----------------------  ----------
    { "p2p",            "getconnectioncount",     &getconnectioncount,     {} },
//    { "p2p",            "ping",                   &ping,                   {} },
//    { "p2p",            "getpeerinfo",            &getpeerinfo,            {} },
//    { "p2p",            "addnode",                &addnode,                {"node","command"} },
//    { "p2p",            "disconnectnode",         &disconnectnode,         {"address", "nodeid"} },
//    { "p2p",            "getaddednodeinfo",       &getaddednodeinfo,       {"node"} },
//    { "p2p",            "getnettotals",           &getnettotals,           {} },
//    { "p2p",            "getp2pinfo",             &getp2pinfo,             {} },
//    { "p2p",            "setban",                 &setban,                 {"subnet", "command", "bantime", "absolute"} },
//    { "p2p",            "listbanned",             &listbanned,             {} },
//    { "p2p",            "clearbanned",            &clearbanned,            {} },
//    { "p2p",            "setp2pactive",           &setp2pactive,           {"state"} },
};


void RegisterP2PRPCCommands(CRPCTable &t)
{
    for (unsigned int vcidx = 0; vcidx < ARRAYLEN(commands); vcidx++)
        t.appendCommand(commands[vcidx].name, &commands[vcidx]);
}
