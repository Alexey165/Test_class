#include "I_Printable.h"

std::ostream& operator<<(std::ostream& os, const I_Printable& obj)
{
	obj.print(os);
	std::cout << std::endl;
	return os;
}