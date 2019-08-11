#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int numstud=0;
	cout << "Enter number of students" << endl;
	cin >> numstud;
	
	int temp=0;
	string tempa="";
	string temp2="";
	string stud[numstud];
	int grades[numstud];
	for(int in=0; in<numstud; in++)
	{
		grades[in]=0;
	}
	for(int input=0; input<numstud; input++)
	{
		cout << "Enter the name" << endl;
		cin >>ws;
		getline(cin,stud[input]);
		transform(stud[input].begin(),stud[input].end(),stud[input].begin(), ::toupper);
		while(grades[input]<50||grades[input]>100)
		{
		cout <<"Enter grade of "  << stud[input] << endl;
		cin >> grades[input];
		}
	}
	
	//bubble sort
	for(int srt =0; srt<numstud; srt++)  
	{
		for(int srta=0; srta<numstud; srta++) //for(int srta=0; srta<srt-numstud-1; srta++)
		{
			if(srta<numstud-1) // 
			{
				if(grades[srta]>grades[srta+1])
				{
					temp=grades[srta];
					grades[srta]=grades[srta+1];
					grades[srta+1]=temp;
					tempa=stud[srta];
					stud[srta]=stud[srta+1];
					stud[srta+1]=tempa;
				}
			}
		}
	}
	cout << "Bubble Sorted: " << endl;
	for(int out=0; out<numstud; out++)
	{
		cout << stud[out] << "   " << grades[out] << endl;
 	}
 
 	//insertion
	return 0;
}
