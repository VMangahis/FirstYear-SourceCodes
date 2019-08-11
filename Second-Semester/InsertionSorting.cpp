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
	string tempb="";
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
	for(int ins=0; ins<numstud; ins++)
 	{
 		temp=grades[ins];
 		tempb=stud[ins];
 		for(int ins2=ins; ins2>0; ins2--)
 		{	
 			if(grades[ins2-1]<temp)
 			{	
				grades[ins2]= grades[ins2-1];
 				grades[ins2-1]=temp;
 				stud[ins2]=stud[ins2-1];
 				stud[ins2-1]=tempb;
 				
			}
		}
	}
		cout << "Insertion Sort" << endl;
		for(int out2=0; out2<numstud; out2++)
	{
		cout <<stud[out2] << "     " <<grades[out2] << endl;
	}}
