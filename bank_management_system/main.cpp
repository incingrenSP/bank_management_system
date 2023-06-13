#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Utility.h"
#include "Window.h"

int main()
{
	std::cout.precision(2);
	std::cout << std::fixed;

	std::cout << "==========================================================\n";
	std::cout << "===========BANK MANAGEMENT SYSTEM=========================\n";
	std::cout << "==========================================================\n\n\n";

	int choice{ 0 };
	Window admin;
	while (1) {
		admin.printWindowfront();
		std::cin >> choice;
		std::cin.ignore(5, '\n');
		admin.checkChoicefront(choice);
		std::cin >> choice;
		std::cin.ignore(5, '\n');
		admin.checkChoiceback(choice);
	}
	return 0;
}

//5503.76 9272.76 14187.86 10393.75 12363.09 
//5729.38 6105.82 3620.78 11453.5 6978.25 
//4133.89 4782.89 4003.03 11409.06 14057.69 
//3812.43 8599.16 8421.55 13405.2 3588.48

//4.82 14.2 8.03 3.82 5.24 4.79 9.31 12.33 13.49 7.73