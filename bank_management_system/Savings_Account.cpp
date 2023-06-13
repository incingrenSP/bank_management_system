#include "Savings_Account.h"

Savings_Account::Savings_Account(std::string p_name, double p_balance, double rate)
	:Account(p_name, p_balance), interest_rate(rate)
{}

Savings_Account::~Savings_Account()
{}

bool Savings_Account::deposit(double amount)
{

	amount *= (1 + interest_rate / 100);
	return Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& acc)
{
	os << "[Savings Account: " << acc.name << " : " << acc.balance << " : " << acc.interest_rate << "]" << std::endl;
	return os;
}