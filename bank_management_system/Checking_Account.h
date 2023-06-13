#pragma once
#include "Account.h"

class Checking_Account :
    public Account
{
    friend std::ostream& operator<<(std::ostream& os, const Checking_Account& acc);
private:
    static constexpr const char* default_name = "Guest Account";
    static constexpr double default_balance = 0.0f;
protected:
    double fee;
public:
    Checking_Account(std::string name = default_name, double balance = default_balance);
    ~Checking_Account();
    bool withdraw(double);
};

