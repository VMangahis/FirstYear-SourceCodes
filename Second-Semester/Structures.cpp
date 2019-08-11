#include<iostream>
#include<string>
#include<windows.h>

using namespace std;


struct student
	{
		string studname;
		int stno;
		float prg;
		float lit;
		float fil;
		float disc;
	}person[3];
	
void PrintOut()
{
	cout << "Student Number" << "Student Name" << "Programming 2" << "Literature" << "Filipino 2" <<  "Discrete Math" << endl;
	for(int out=0 ;out <3; out++)
	{
		cout << person[out].stno << "        " << person[out].studname << "           " << person[out].prg << "            " << person[out].lit<< "          " << person[out].fil <<"     "<< person[out].disc << endl;
	}
}

int main()
{
	cout << GetSystemMetrics(SM_CXFULLSCREEN) << endl;
		cout << GetSystemMetrics(SM_CYFULLSCREEN);
	for(int input =0; input<3; input++)
	{
		cout << "Input name of student" << endl;
		cin >> person[input].studname;
		cout << "Input student number" << endl;
		cin >> person[input].stno;
		cout << "Input grades (Comp prog 2)" << endl;
		cin >> person[input].prg;
		cout << "Input grades (Literature)" << endl;
		cin >> person[input].lit;
		cout << "Input grades (Filipino)" << endl;
		cin >> person[input].fil;
		cout << "Input grades (Discrete Math)" << endl;
		cin >> person[input].disc ;
	}
	PrintOut();
}
