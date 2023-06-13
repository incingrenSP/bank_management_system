#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string p_name, double p_balance, double p_rate)
	:Savings_Account(p_name, p_balance, p_rate), count(3)
{}

Trust_Account::~Trust_Account()
{}

bool Trust_Account::deposit(double amount)
{
	if (amount > 5000.00f) {
		amount += 50.00f;
	}
	return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount)
{
	double cap = 0.2 * balance;
	if (cap > amount || count > 0) {
		Savings_Account::withdraw(amount);
		count--;
	}
	else {
		std::cout << "Withdraw failed" << std::endl;
		return false;
	}
	return true;
}

std::ostream& operator<<(std::ostream& os, const Trust_Account& acc)
{
	os << "[Trust Account: " << acc.name << " : " << acc.balance << " : " << acc.interest_rate << "]" << std::endl;
	return os;
}