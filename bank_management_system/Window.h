#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

class Window {
protected:
	std::vector<Account> acc;
	std::vector<Savings_Account> s_acc;
	std::vector<Checking_Account> c_acc;
	std::vector<Trust_Account> t_acc;
public:
	Window();
	~Window();
	void printWindowfront();
	void printWindowback();
	void checkChoicefront(int choice);
	void checkChoiceback(int choice);

	void inputAccount();
	void inputSavingsAccount();
	void inputCheckingAccount();
	void inputTrustAccount();
};

//void printWindowfront();
//void printWindowback();
//void checkChoicefront(int choice, std::vector<Account>& acc, std::vector<Savings_Account>& s_acc, std::vector<Checking_Account>& c_acc, std::vector<Trust_Account>& t_acc);
//void checkChoiceback(int choice, std::vector<Account>& acc, std::vector<Savings_Account>& s_acc, std::vector<Checking_Account>& c_acc, std::vector<Trust_Account>& t_acc);
//
//void inputAccount(std::vector<Account>& acc);
//void inputSavingsAccount(std::vector<Savings_Account>& acc);
//void inputCheckingAccount(std::vector<Checking_Account>& acc);
//void inputTrustAccount(std::vector<Trust_Account>& acc);