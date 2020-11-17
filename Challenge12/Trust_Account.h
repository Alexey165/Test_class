#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"
class Trust_Account :public Savings_Account
{
private:
	static constexpr const char* def_name = "Unnamed Savings_Account";
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
	static constexpr double bonus = 50;
protected:
	int withdraw_check{0};
public:
	Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
	virtual bool withdraw(double amount)override;
	virtual bool deposit(double amount)override;
	virtual void print(std::ostream& os) const override;
	virtual ~Trust_Account() = default;
};

#endif // !_TRUST_ACCOUNT_H_