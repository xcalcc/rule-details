
using namespace mychain;
using namespace MyContract::Sample;

class demoBranch:public Contract {
public:
    TransferPtr m_ptransfer;

    demoBranch() {
        m_ptransfer = GetTransferM();
    }
    INTERFACE void Init() {
        InitRoot();
    }
    
    INTERFACE void LeakToLog(const std::string& sAccountName ) {
        if(!m_ptransfer) {
            Revert("error");
        }

	// get account, balance etc
        AccountMMapPtr pAccountMap = m_ptransfer->get_accounts();
        if (!pAccountMap) {
            Revert("AcountMMapPtr Error.");
        }

        // obtain user account number and name
	// ...

	//
        int32_t iBalanceRmb = pBalance->get_rmb();
        std::string sBalanceTopic = std::to_string(iBalanceRmb);
        std::vector<std::string> leak_msg;
        leak_msg.push_back(sAccountName);
        leak_msg.push_back(sBalanceTopic);
	
        if (iBalanceRmb < 1) {
          Log(std::string("acc_bal"), leak_msg);
        }
    }
};
INTERFACE_EXPORT(demoBranch, (Init) (LeakToLog))
