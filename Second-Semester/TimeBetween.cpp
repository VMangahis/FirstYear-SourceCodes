#include<iostream>

using namespace std;


struct time
{
	int sec;
	int minutes;
	int hours;
}timeinput[3];

void CalculateTime()
{	
	if(timeinput[1].sec>timeinput[0].sec)
	{
		timeinput[0].sec+=60;
		timeinput[0].minutes-=1;
	}
	timeinput[2].sec=timeinput[0].sec-timeinput[1].sec;	
	
	
	if(timeinput[1].minutes>timeinput[0].minutes)
	{
		timeinput[0].minutes+=60;
		timeinput[0].hours-=1;
	}
	timeinput[2].minutes=timeinput[0].minutes-timeinput[1].minutes;
	
	
	timeinput[2].hours=timeinput[0].hours-timeinput[1].hours;
	
	
	
	
}


int main()
{
	
	for(int input=0; input<2)
	cout << "Input the first number of hours" << endl;
	cin >> timeinput[input].hours;
	while(timeinput[input].hours>24)
	{
		cout << "Hours cannot be more than 24 hours" << endl;
		cin >> timeinput[input].hours;
	}
	
	cout << "Input the first number of minutes " << endl;
	cin >> timeinput[input].minutes;
	while(timeinput[input].minutes>=60)
	{
		timeinput[input].minutes-=60;
		timeinput[input].hours+=1;
	}
	
	cout << "Input the first number of seconds" << endl;
	cin >> timeinput[input].sec;
	while(timeinput[input].sec>=60)
	{
		timeinput[input].sec-=60;
		timeinput[input].minutes+=1;
	}
	
	
	
	cout << "Input the second number of hours" << endl;
	cin >> timeinput[1].hours;
	while(timeinput[1].hours>timeinput[0].hours)
	{
		cout << "Second input of hours cannot be greater than the first" << endl;
		cin >> timeinput[1].hours;
	}
	
	cout << "Input the second number of minutes " << endl;
	cin >> timeinput[1].minutes;
	while(timeinput[1].minutes>=60)
	{
		timeinput[1].minutes-=60;
		timeinput[1].hours+=1;
	}
	
	cout << "Input the seonds number of seconds" << endl;
	cin >> timeinput[1].sec;
	while(timeinput[1].sec>=60)
	{
		timeinput[1].sec-=60;
		timeinput[1].minutes+=1;
	}
	
	cout << "Time between " << timeinput[0].hours << ":" << timeinput[0].minutes << ":" << timeinput[0].sec << " and " << timeinput[1].hours << ":" << timeinput[1].minutes << ":" << timeinput[1].sec << " is ";
	aaaCalculateTime();
	cout<< timeinput[2].hours << "  Hours " << timeinput[2].minutes << "  Minutes  " << 
	timeinput[2].sec << "  Seconds" <<endl;

		
}
