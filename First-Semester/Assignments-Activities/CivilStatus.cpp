#include <iostream>
#include <string>

using namespace std;

int main()
{
	string status;
	cout << "What is your civil status? (M - Married, S - Single, W - Widowed)" << endl;
	cin >> status;
	if(status == "m" || status == "M" || status =="Married")
	{
		cout << "Married";
	}
	else if(status == "s" || status == "S" || status == "Single")
	{
		cout << "Single";
	}
	else if (status == "w" || status == "W" || status == "Widowed")
	{
		cout << "Widowed";
	}
	else
	{
		cout << "Invalid input";
	}
}
