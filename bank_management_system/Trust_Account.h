#pragma once
#include "Savings_Account.h"

class Trust_Account :
    public Savings_Account
{
    friend std::ostream& operator<<(std::ostream& os, const Trust_Account& acc);
private:
    static constexpr const char* default_name = "Guest Account";
    static constexpr double default_balance = 0.0f;
    static constexpr double default_interest = 0.0f;
protected:
    int count;
public:
    Trust_Account(std::string name = default_name, double balance = default_balance, double interest_rate = default_interest);
    ~Trust_Account();
    bool deposit(double);
    bool withdraw(double);
};

