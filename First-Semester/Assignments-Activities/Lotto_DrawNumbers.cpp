#include<iostream>
#include <iomanip>
#include<ctime>
#include<stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int upp;
	char pick;
	int nums;
	while(pick!='x')
	{
		loop:
		cout << "Lucky picks" << endl;
		cout << "1:" << setw(5) << "6/42" << endl;
		cout << "2:" << setw(5) << "6/45" << endl;
		cout << "3:" << setw(5) << "6/49" << endl;
		cout << "4:" << setw(5) << "6/55"<<endl;
		cout << "5:" << setw(5) << "6/58" << endl;
		cout << "x:" << setw(5) << "Exit" << endl;
		cin >> pick;
		switch(pick)
		{
			case '1': upp=42; break;
			case '2': upp=45; break;
			case '3': upp=49; break;
			case '4': upp=55; break;
			case '5': upp=58; break;
			case 'x': return 0;
			default: goto loop;
		}
		
		for(int out=0; out<7; out++)
		{
			nums=1+rand()%upp-1+1;
			cout << nums << setw(10);
			
		}
		cout << endl;
		
}}

// 645 642 658 649  6 55
