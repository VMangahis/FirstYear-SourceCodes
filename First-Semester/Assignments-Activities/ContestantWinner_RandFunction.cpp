#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
using namespace std;

int main()
{
	
	int noc;
	srand(time(NULL));
	cout << "Enter number of contestants" << endl;
	cin >> noc;
	string *cont=new string[noc];
	for(int input=0; input<noc; input++)
	{
		cout << "Enter name of contestant" << endl;
		getline(cin,cont[input]);
		cin.ignore();
	}
	int win=rand()%noc+1;
	cout << "Winner is " << cont[win]  << endl;
}

