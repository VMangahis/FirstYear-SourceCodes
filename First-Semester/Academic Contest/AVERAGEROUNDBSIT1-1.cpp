#include<iostream>

using namespace std;
int main()
{
	bool again=true;
	while (again==true)
	{
	int lower=0;
	int upper=0;
	int sumeven=0;
	int sumodd=0;
	char resp=' ';
	cout << "Enter the lowerbound" << endl;
	cin >> lower;
	while(!cin)
	{
		cout << "Invalid lowerbound number. Try again" << endl;
		cin >> lower;
	}
	cout << "Enter the upperbound" << endl;
	cin >> upper;
	while(!cin)
	{
		cout << "Invalid upperbound number. Try again" << endl;
		cin >> upper;
	}
	while(lower>upper)
	{
		cout << "Max range should be higher than the min. range. Please Try again. " << endl;
		cin >> upper; 
	}

	for(int i=lower;i<=upper;i++)
	{
		if(i%2==0)
		{
			sumeven+=i;
		}
		else
		{
			sumodd+=i;
		}
	}
	cout << "Sum of even number : " << sumeven << endl;
	cout << "Sum of odd number : " << sumodd << endl;
	cout << "Do you want to try again? (Y/N)" << endl;
	cin >> resp;
	if(toupper(resp)=='Y')
	{
		again=true;
	}
	else if(toupper(resp)=='N')
	{
		again=false;
	}
	}
	return 0;
}


