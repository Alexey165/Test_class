#ifndef _INSUFFICIENT_FUNDS_EXEPTION_H_
#define _INSUFFICIENT_FUNDS_EXEPTION_H_
#include<exception>


class InsuffficientFundsExeption: public std::exception
{
public:
	InsuffficientFundsExeption()noexcept = default;
	~InsuffficientFundsExeption() = default;
	virtual const char* what() const noexcept
	{
		return"Insuffficient Funds Exeption";
	}

};










#endif // !_INSUFFICIENT_FUNDS_EXEPTION_H_
