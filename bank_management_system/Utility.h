#pragma once
#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

//Account Class

void display(std::vector<Account>& account);
void deposit(std::vector<Account>& account, double amount);
void withdraw(std::vector<Account>& account, double amount);


//Savings Account Class

void display(std::vector<Savings_Account>& account);
void deposit(std::vector<Savings_Account>& account, double amount);
void withdraw(std::vector<Savings_Account>& account, double amount);

//Checking Account Class

void display(std::vector<Checking_Account>& account);
void deposit(std::vector<Checking_Account>& account, double amount);
void withdraw(std::vector<Checking_Account>& account, double amount);

//Trust Account Class

void display(std::vector<Trust_Account>& account);
void deposit(std::vector<Trust_Account>& account, double amount);
void withdraw(std::vector<Trust_Account>& account, double amount);