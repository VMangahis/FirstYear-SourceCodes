#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	int x;
	string name="jones, smoth";
	transform(name.begin(),name.end(),name.begin(),::toupper);
	x=name.compare(7,5,"SMITH"); //x = 1 because the o in smoth is higher than i in smith
	cout << x;
}
