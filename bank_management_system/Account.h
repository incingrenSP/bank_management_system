#pragma once
#include <iostream>
#include <string>

class Account
{
	friend std::ostream& operator<<(std::ostream& os, const Account& acc);
private:
	//default parameters
	static constexpr const char* default_name = "Guest Account";
	static constexpr double default_balance = 0.0f;
protected:
	//inheritable members
	std::string name;
	double balance;
public:
	Account(std::string name = default_name, double balance = default_balance);
	~Account();

	bool deposit(double);
	bool withdraw(double);
	double getBalance() const;
};

