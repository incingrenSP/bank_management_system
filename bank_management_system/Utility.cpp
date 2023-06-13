#include "Utility.h"

//Account Class

void display(std::vector<Account>& account)
{
	std::cout << "================Account======================================" << std::endl;
	for (const auto& acc : account)
		std::cout << acc;
}
void deposit(std::vector<Account>& account, double amount)
{
	for(auto &acc: account)
		if (acc.deposit(amount)) {
			std::cout << "Deposit successful: " << acc;
		}
		else {
			std::cout << "Failed to deposit on:" << acc;
		}
}
void withdraw(std::vector<Account>& account, double amount)
{
	for (auto& acc : account)
		if (acc.withdraw(amount)) {
			std::cout << "Withdrawal successful: " << acc;
		}
		else {
			std::cout << "Failede to withdraw from:" << acc;
		}
}

//Savings Account Class

void display(std::vector<Savings_Account>& account)
{
	std::cout << "==============Savings Account=========================" << std::endl;
	for (const auto& acc : account)
		std::cout << acc;
}
void deposit(std::vector<Savings_Account>& account, double amount)
{
	for (auto& acc : account)
		if (acc.deposit(amount)) {
			std::cout << "Deposit successful: " << acc;
		}
		else {
			std::cout << "Failed to deposit on:" << acc;
		}
}
void withdraw(std::vector<Savings_Account>& account, double amount)
{
	for (auto& acc : account)
		if (acc.withdraw(amount)) {
			std::cout << "Withdrawal successful: " << acc;
		}
		else {
			std::cout << "Failede to withdraw from:" << acc;
		}
}

//Checking Account Class

void display(std::vector<Checking_Account>& account)
{
	std::cout << "================Checking Account=========================" << std::endl;
	for (const auto& acc : account)
		std::cout << acc;
}
void deposit(std::vector<Checking_Account>& account, double amount)
{
	for (auto& acc : account)
		if (acc.deposit(amount)) {
			std::cout << "Deposit successful: " << acc;
		}
		else {
			std::cout << "Failed to deposit on:" << acc;
		}
}
void withdraw(std::vector<Checking_Account>& account, double amount)
{
	for (auto& acc : account)
		if (acc.withdraw(amount)) {
			std::cout << "Withdrawal successful: " << acc;
		}
		else {
			std::cout << "Failede to withdraw from:" << acc;
		}
}

//Trust Account Class

void display(std::vector<Trust_Account>& account)
{
	std::cout << "==================Trust Account================" << std::endl;
	for (const auto& acc : account)
		std::cout << acc;
}
void deposit(std::vector<Trust_Account>& account, double amount)
{
	for (auto& acc : account)
		if (acc.deposit(amount)) {
			std::cout << "Deposit successful: " << acc;
		}
		else {
			std::cout << "Failed to deposit on:" << acc;
		}
}
void withdraw(std::vector<Trust_Account>& account, double amount)
{
	for (auto& acc : account)
		if (acc.withdraw(amount)) {
			std::cout << "Withdrawal successful: " << acc;
		}
		else {
			std::cout << "Failede to withdraw from:" << acc;
		}
}