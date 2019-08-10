#include <iostream>

using namespace std;

int main()
{
	float distance, gallons;
	cout << "This program will calculate the distance that your vehicle can travel with just 1 gallon of gas (Miles Per Gallon)." << endl;
	cout << "Enter the number of miles travelled to reach a certain gas station." << endl;
	cin >> distance;
	cout << "Enter the number of gallons of gas refilled in order for your vehicle to be full tank." << endl;
	cin >> gallons;
	cout << "Your vehicle can drive: " << distance/gallons <<"/mpg" << endl;
	return 0;
	
}
