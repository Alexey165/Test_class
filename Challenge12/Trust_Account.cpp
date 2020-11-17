#include "Trust_Account.h"
#include<string>

Trust_Account::Trust_Account(std::string name , double balance , double int_rate )
:Savings_Account(name,balance,int_rate)
{
	if (balance < 0)
		throw IllegalBalanceException();
}
bool Trust_Account::withdraw(double amount)
{
	if (withdraw_check <= 3 && amount <= balance * 0.2)
	{
		++withdraw_check;
		return  Savings_Account::withdraw(amount);
	}
	else
	{
		return false;
	}
}

bool Trust_Account::deposit(double amount)
{
	if (amount >= 5000)
		amount += bonus;
	return Savings_Account::deposit(amount );
	

}

void Trust_Account::print(std::ostream& os) const
{
	os.precision(2);
	os << std::fixed;
	os << "[Trust_Account: " << name << " , " << balance << " , "<<int_rate<<" ]";
}