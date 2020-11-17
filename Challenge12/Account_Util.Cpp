#include"Account_Util.h"

void display(const std::vector<Account*>& account)
{
	std::cout << "\n====Account===============================" << std::endl;
	for (const auto acc : account)
		std::cout << *acc;
}
void deposite(std::vector<Account*>& account, double amount)
{
	std::cout << "\n====Depositing to Account===============================" << std::endl;
	for (auto acc : account)
		if (acc->deposit(amount))
			std::cout << "deposited " << amount << " to " << *acc ;
		else
			std::cout << "Failed Deposit of " << amount << " to " << *acc ;

}
void withdraw(std::vector<Account*>& account, double amount)
{
	std::cout << "\n====Withdraw to Account===============================" << std::endl;
	for(auto acc:account)
		if(acc->withdraw(amount))
			std::cout << "Withdraw " << amount << " from " << *acc ;
		else
			std::cout << "Failed Withdraw of " << amount << " from " << *acc ;
}




