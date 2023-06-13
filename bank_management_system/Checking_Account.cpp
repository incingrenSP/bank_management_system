#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string p_name, double p_balance)
	:Account(p_name, p_balance), fee(1.50f)
{}

Checking_Account::~Checking_Account()
{}

bool Checking_Account::withdraw(double amount)
{
	amount += fee;
	return Account::withdraw(amount);
}

std::ostream& operator<<(std::ostream& os, const Checking_Account& acc)
{
	os << "[Checking Account: " << acc.name << " : " << acc.balance << " : " << acc.fee << "]" << std::endl;
	return os;
}