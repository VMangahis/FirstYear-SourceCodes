#include <iostream>
#include <string>

using namespace std;

int main()
{
	int year, units;
	float tuitionfee, misc, labfee;
	cout << "What is your current level in College in _______ (1 - 1st year, 2 - 2nd year, 3 - 3rd year, 4 - 4th year)" << endl;
	cin >> year;
		if(year == 1)
		{
			
			misc = 500;
			labfee = 700;
		}
		
		else if(year == 2)
		{
			
			misc = 650;
			labfee = 900;
		}
		else if(year == 3)
		{
			
			misc = 850;
			labfee = 1050;
		}
		else if(year == 4)
		{
			
			misc = 900;
			labfee = 1500;
			cout << "Misc is " << misc << " Labfee is " << labfee << endl;
		}
		else 
		{
			cout << "Invalid input" << endl;
		}
}
