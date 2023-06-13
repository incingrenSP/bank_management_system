#include "Account.h"

Account::Account(std::string p_name, double p_balance)
	:name(p_name), balance(p_balance)
{}

Account::~Account()
{}

bool Account::deposit(double amount)
{
	if (amount < 0) {
		return false;
	}
	else {
		this->balance += amount;
	}
	return true;
}

bool Account::withdraw(double amount)
{
	if (this->balance < amount) {
		return false;
	}
	else {
		this->balance -= amount;
	}
	return true;
}

double Account::getBalance() const
{
	return this->balance;
}

std::ostream& operator<<(std::ostream& os, const Account& acc)
{
	os << "[Account: " << acc.name << " : " << acc.balance  << "]" << std::endl;
	return os;
}