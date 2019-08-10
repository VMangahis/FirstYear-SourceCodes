#include <iostream>
#include<string>
using namespace std;

int main() 
{
	string name, chkorref;
	float grincome, txamount, tax;
	int depend;
	cout << "This program will determine the additional/refund tax owed by an employee." << endl;
	cout << "Enter the name of employee" << endl;
	getline(cin, name);
	cout << "Enter his/her gross income in dollar currency"  << endl;
	cin >> grincome;
	cout <<  "Enter the number children/dependents in his/her family" << endl;
	cin >> depend;
	cout << "Enter the amount of tax already deducted" << endl; 
	cin >> txamount;
	tax = (.04*(grincome-(500*depend)))-txamount;
	if(tax > 0)
	{
		chkorref = "SEND CHECK";
	}
	else
	{
		chkorref = "REFUND";
	}
	cout << "Mr/Ms/Mrs. " << name << " currently owes state tax amounting to:\n$ " << tax << endl;
	cout << chkorref;	
	return 0;
}



