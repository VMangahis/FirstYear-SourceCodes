#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
	int enrolled;
	float tempgrade;
	string tempname;
	string count;
	int found;
	cout << "Enter number of students enrolled" << endl;
	cin >> enrolled;
	string *diffcrs=new string[enrolled];
	string *course=new string[enrolled];
	string *name=new string[enrolled];
	float *grade=new float[enrolled];
	string tempcourse;
	for(int input=0; input<enrolled; input++)
	{
			cout << "Enter the course" << endl;
		cin>>course[input];
		cout<<"Enter the name"<<endl;
		cin.ignore();
		getline(cin,name[input]);
		transform(name[input].begin(),name[input].end(),name[input].begin(),::toupper);
		cout << "Enter grade" << endl;
		cin >> grade[input];
	}
	for(int i=0; i<enrolled-1; i++)
	{
		for(int j=0; j<enrolled-i-1; j++)
		{
			if(course[j]>course[j+1])
			{
				tempcourse=course[j];
				course[j]=course[j+1];
				course[j+1]=tempcourse;	
				tempname=name[j];
				name[j]=name[j+1];
				name[j+1]=tempname;	
				tempgrade=grade[j];
				grade[j]=grade[j+1];
				grade[j+1]=tempgrade;		
			}
			
			if(grade[j]<grade[j+1]&&course[j]==course[j+1])
			{
				tempname=name[j];
				name[j]=name[j+1];
				name[j+1]=tempname;	
				tempgrade=grade[j];
				grade[j]=grade[j+1];
				grade[j+1]=tempgrade;
			}	
		}
	}
	for(int out=0;out<enrolled;out++)
	{
		cout << course[out]<< setw(10) << name[out]<< setprecision(2)
		<< setw(10)<< grade[out]<< endl;
}	
system("pause");
}
//done
