#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int find=-1;
	string name[5]={""};
	for(int i=0; i<5; i++)
	{
		find=-1;
		cout << "Enter name" << endl;
		getline(cin,name[i]);
		transform(name[i].begin(),name[i].end(),name[i].begin(),::toupper);
		do
		{
			find=name[i].find("S",0);
			if(find>=0)
			{
				name[i]=name[i].replace(find,1,"?");
			}
		}while(find>=0);
		
		
		
	}
	for(int o=0; o<5; o++)
	{
		cout << name[o] << endl;
	}
}

//find and replace all characters with s
