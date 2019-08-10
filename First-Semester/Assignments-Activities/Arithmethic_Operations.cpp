#include <iostream>

using namespace std;

int main()
{
	float x, y;
	cout << "This program will print the sum, product, difference and quotient of the two numbers that the user will input." << endl;
	cout << "Enter your first number" << endl;
	cin >> x;
	cout << "Enter your second number" << endl;
	cin >> y;
	cout << "Here are the results:" << endl;
	cout << "Sum is: " << x+y << endl; 
	cout << "Product is: " << x*y << endl;
	cout << "Difference is: " << x-y << endl;
	cout << "Quotient is: " << x/y << endl;
	return 0;
}
