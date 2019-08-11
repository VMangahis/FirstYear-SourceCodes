#include<iostream>

using namespace std;

int main()
{
	int array[10]={5,1,8,3,9,0,11,10,16,7};
	for(int sort=0; sort<10; sort++)
	{
		for(int sort1=sort+1; sort1<10;sort1++)
		{
			if(array[sort]<array[sort1])
			{
				int temp=array[sort];
				array[sort]=array[sort1];
				array[sort1]=temp;
			}
		}
	}
	for(int out=0; out <10; out++)
	{
		cout << array[out] << ", ";
	}
}
