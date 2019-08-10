#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
	string x;
	for(int input=0; input < 5 ; input++)
	{
		
		cin >> x;
		transform(x.begin(),x.end(),x.begin(),::toupper);
		int find = x.find("STA.",0);
		find = x.find("STA", 0);
		if(find>=0)
		{
			x.replace(find,5,"SANTA");
		}
		cout << x << " \n";
	}
}
