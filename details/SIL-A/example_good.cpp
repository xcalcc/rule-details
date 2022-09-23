#include <mychainlib/contract.h>

#include "transfer_ant_generated.h"

using namespace mychain;
using namespace MyContract::Sample;

class demo:public Contract {
public:
    TransferMPtr m_ptransfer;

    demo() {
        m_ptransfer = GetTransferM();
    }
    INTERFACE void Init() {
        InitRoot();
    }
    
    INTERFACE void LeakToLog(const std::string& sAccountName ) {
        if(!m_ptransfer) {
            Revert("error");
        }
        
        AccountMMapPtr pAccountMap = m_ptransfer->get_accounts();
        if (!pAccountMap) {
            Revert("AcountMMapPtr Error.");
        }

        AccountMPtr pAccount = pAccountMap->get_element(sAccountName);
        if(!pAccount) {
            Revert("error");
        }

        BalanceMPtr pBalance = pAccount->get_balance();
        if(!pBalance) {
            Revert("error");
        }
        
        int32_t iBalanceRmb = pBalance->get_rmb();
        std::string sBalanceTopic = std::to_string(iBalanceRmb);
        std::vector<std::string> good_msg;
        good_msg.push_back(sAccountName);
        good_msg.push_back(std::string("good_branch"));

        if (iBalanceRmb > 1000) {
          Log(std::string("acc_bal"), good_msg);
        }
    }
};
INTERFACE_EXPORT(demo, (Init) (LeakToLog))
