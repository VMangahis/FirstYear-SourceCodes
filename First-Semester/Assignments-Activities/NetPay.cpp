#include <iostream>
#include <string>

using namespace std;

int main()
{
	string surname, firstname, middlename;
	float totalhour, hrate, taxrate, taxamount, taxrate1, netpay, decimals;
	cout << "This program will compute and display your take home pay along with your name." << endl;
	cout << "Enter your surname" << endl;
	getline(cin, surname);
	cout << "Enter your first name" << endl;
	getline(cin, firstname);
	cout << "Enter your middle name" << endl;
	getline(cin, middlename); 
	cout << "Enter the total number of hours worked" << endl;
	cin >> totalhour;
	cout << "Enter the hourly rate" << endl;
	cin >> hrate; 
	cout << "Enter the tax rate" << endl;
	cin >> taxrate;
	taxrate1= taxrate/100.00;
	taxamount = (totalhour*hrate)*taxrate1;
	netpay = (totalhour*hrate)-taxamount;
	cout << "Name: " << surname << ", " << firstname << " " << middlename << endl;
	cout << "Net Pay: P " << netpay << endl;
	return 0;
}
