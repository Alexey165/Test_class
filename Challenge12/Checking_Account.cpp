#include "Checking_Account.h"
#include<string>
Checking_Account::Checking_Account(std::string name , double balance )
	:Account(name,balance)
{
	if (balance < 0)
		throw IllegalBalanceException();
}
bool Checking_Account::withdraw(double amount)
{ 
	amount += 1.5;
	return Account::withdraw(amount );
}

bool Checking_Account::deposit(double amount)
{
	return Account::deposit(amount);
}

void Checking_Account::print(std::ostream& os) const
{
	os.precision(2);
	os << std::fixed;
	os << "[Checking_Account: " << name << " , " << balance << " ]";
}