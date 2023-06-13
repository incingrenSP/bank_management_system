#pragma once
#include "Account.h"

class Savings_Account :
    public Account
{
    friend std::ostream& operator<<(std::ostream& os, const Savings_Account& acc);
private:
    static constexpr const char* default_name = "Guest Account";
    static constexpr double default_balance = 0.0f;
    static constexpr double default_interest = 0.0f;
protected:
    double interest_rate;
public:
    Savings_Account(std::string name = default_name, double balance = default_balance, double interest_rate = default_interest);
    ~Savings_Account();
    bool deposit(double);
};

