#include<iostream>
#include<cstdlib>
#include "Account.h"

using namespace std;

int get_account_id()
{
	int id;
	cout << "/nPlease select an account number 0-9" << endl;
	cin >> id;
	return id;


}
int get_choice()
{
	int option;
	cout << "Enter 1 to make a deposit" << endl;
	cout << "Enter 2 to make a withdraw" << endl;
	cout << "Enter 3 to check balance" << endl;
	cout << "Enter 4 to check interest rate" << endl;
	cout << "Enter 5 to display account summany" << endl;
	cout << "Enter -1 to return to the main menu" << endl;
	cin >> option;
	return option;
}