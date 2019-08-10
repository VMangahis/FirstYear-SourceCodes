#include <iostream>

using namespace std;

int main()
{
	float presmeter, prevmeter, bill, wateruse;
	cout << "He" << endl;
	cin >> presmeter; 
	cin >> prevmeter;
	wateruse = presmeter - prevmeter;
	if(wateruse == 80)
	{
		bill = 120;
	}
	else if(wateruse > 80 || wateruse < 80)
	{
		bill = 120 + ((80-wateruse)*12);
	}
	else 
	{
		cout << "Invalid Input " << endl;
		return 0;
	}
	
	cout << bill << endl;
	cout << wateruse << endl;
	return 0;
	
}
