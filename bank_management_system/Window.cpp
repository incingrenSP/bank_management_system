#include "Window.h"

Window::Window()
{}

Window::~Window()
{}

void Window::checkChoicefront(int choice)
{
	if (choice >= 1 || choice < 5) {
		printWindowback();
	}
	else {
		std::cout << "Please enter a valid input: ";
	}
}

void Window::checkChoiceback(int choice)
{
	switch (choice) {
	case 1:
		inputAccount();
		break;
	case 2:
		inputSavingsAccount();
		break;
	case 3:
		inputCheckingAccount();
		break;
	case 4:
		inputTrustAccount();
		break;
	case 5:
		system("cls");
		break;
	case 6:
		exit(0);
		break;
	default:
		std::cout << "Please enter a valid input";
	}
}

void Window::inputAccount()
{
	std::string name;
	double balance;
	std::cout << "\nName: ";
	std::getline(std::cin, name);
	std::cout << "\nBalance: ";
	std::cin >> balance;
	acc.push_back(Account{ name, balance });
}

void Window::inputSavingsAccount()
{
	std::string name;
	double balance, rate;
	std::cout << "\nName: ";
	std::getline(std::cin, name);
	std::cout << "\nBalance: ";
	std::cin >> balance;
	std::cout << "\nInterest Rate: ";
	std::cin >> rate;
	s_acc.push_back(Savings_Account{ name, balance , rate});
}

void Window::inputCheckingAccount()
{
	std::string name;
	double balance;
	std::cout << "\nName: ";
	std::getline(std::cin, name);
	std::cout << "\nBalance: ";
	std::cin >> balance;
	c_acc.push_back(Checking_Account{ name, balance });
}

void Window::inputTrustAccount()
{
	std::string name;
	double balance, rate;
	std::cout << "\nName: ";
	std::getline(std::cin, name);
	std::cout << "\nBalance: ";
	std::cin >> balance;
	std::cout << "\nInterest Rate: ";
	std::cin >> rate;
	t_acc.push_back(Trust_Account{ name, balance , rate });
}

void Window::printWindowfront()
{
	std::cout << "[1] Create new account\n";
	std::cout << "[2] Deposit\n";
	std::cout << "[3] Withdraw\n";
	std::cout << "[4] Display\n";
	std::cout << "[5] Exit\n";
	std::cout << "\nWhat do you want to do? ";
}
void Window::printWindowback()
{
	std::cout << "[1] Normal Account\n";
	std::cout << "[2] Savings Account\n";
	std::cout << "[3] Checking Account\n";
	std::cout << "[4] Trust Account\n";
	std::cout << "[5] Back\n";
	std::cout << "[6] Exit\n";

	std::cout << "\nPlease select account type: ";
}