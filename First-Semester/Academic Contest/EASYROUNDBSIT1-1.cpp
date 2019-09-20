#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
	string month;
	cout << "Input a month" << endl;
	cin >> month;
	transform(month.begin(),month.end(),month.begin(),::toupper);
	if(month == "JANUARY")
	{
		cout << "Regular Holidays:" << endl;
		cout << "New Year's Day - January 1" << endl;
		cout << "No Non-Working Holidays" << endl;
	}
	else if(month == "FEBRUARY")
	{
		cout << "Non-Working Holidays" << endl;
		cout << "Chinese New Year - February 10" << endl;
		cout << "EDSA People Power Anniversary - February 25" << endl;
		cout << endl;
		cout << "No Regular Holidays" << endl;
	}
	else if(month == "MARCH")
	{
		cout << "Regular Holidays:" << endl;
		cout << "Maundy Thursday - March 29" << endl;
		cout << "Good Friday - March 30" << endl;
		cout << endl;
		cout << "Non-Working Holidays" << endl;
		cout << "Black Saturday - March 31" << endl;
	}
	else if(month == "APRIL")
	{
		cout << "Regular Holidays:" << endl;
		cout << "Araw ng Kagitingan - April 9" << endl;
		cout << "Good Friday - March 30" << endl;
		cout << "No Non-Working Holidays" << endl;
	}
	else if(month == "MAY")
	{
		cout << "Regular Holidays:" << endl;
		cout << "Labor Day - May 1" << endl;
		cout << "No Non-Working Holidays" << endl;
	}
	else if(month == "JUNE")
	{
		cout << "Regular Holidays:" << endl;
		cout << "Independence Day - June 12" << endl;
		cout << "No Non-Working Holidays" << endl;
	}
	else if(month == "JULY" || month == "SEPTEMBER" || month == "OCTOBER")
	{
		cout << "No Regular and Non-Working Holidays" << endl;
	}
	else if(month == "AUGUST")
	{
		cout << "Regular Holidays:" << endl;
		cout << "National Heroes Day - August 27" << endl;
		cout << endl;
		cout << "Non-Working Holidays:" << endl;
		cout << "Ninoy Aquino Day - August 21" << endl;
	}
	else if(month == "NOVEMBER")
	{
		cout << "Regular Holidays" << endl;
		cout << "Bonifacio Day - November 30" << endl;
		cout << endl;
		cout << "Non-Working Holidays:" << endl;
		cout << "All Saints Day - November 1" << endl;
		cout << "All Souls Day - November 2" << endl;
	}
	else if(month == "DECEMBER")
	{
		cout << "Regular Holidays: " << endl;
		cout << "Christmas Day - December 25" << endl;
		cout << "Rizal Day - December 30" << endl;
		cout << endl;
		cout << "Non-Working Holidays:" << endl;
		cout << "Christmas Eve - December 24" << endl;
		cout << "New Year's Eve - December 31" << endl;
	}
	else
	{
		cout << "Invalid Input" << endl;
		return 0;
	}
	return 0;


}
