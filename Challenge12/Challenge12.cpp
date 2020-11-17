// Challenge12.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<vector>
#include"Account.h"
#include"Savings_Account.h"
#include"Checking_Account.h"
#include"Trust_Account.h"
#include"Account_Util.h"
#include"I_Printable.h"


int main()
{
   
    try {
        Account* p1 = new Checking_Account("Larry", 1000);
        Account* p2 = new Savings_Account("Moe", 1000);
        Account* p3 = new Trust_Account("Curly");

        std::vector<Account*>account{ p1,p2,p3 };
        display(account);
        deposite(account, 1000);
        try {
            withdraw(account, 3000);
        }
        catch (const InsuffficientFundsExeption & ex) { std::cerr << ex.what() << std::endl; }
        display(account);

        delete p1;
        delete p2;
        delete p3;

    }
    catch (const IllegalBalanceException & ex)
    {
        std::cerr << ex.what() << std::endl;
    }
    
    


    return 0;
}

