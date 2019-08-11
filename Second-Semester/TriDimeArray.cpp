#include<iostream>

using namespace std;
// row number of students
//quiz 10
// ask 1

int main()
{
	int ques=0;
	int stud=0;
	char ans=' ';
	int correct=0;
	float score=0;
	cout << "Enter number of students" << endl;
	cin >> stud;
	cout << "Enter number of questions" << endl;
	cin >> ques;
	int quiz[stud][ques][1];
	cout << "Size of rows: " << sizeof(quiz)/sizeof(quiz[0]) << endl;
	cout << "Size of columns: " << sizeof(quiz[0])/sizeof(quiz[0][0]) << endl;
	cout << "Size of z: " << sizeof(quiz[0][0])/sizeof(quiz[0][0][0]) << endl;
	cout << "A, B, C, D, E" << endl;
	for(int start=0; start<stud; start++)
	{
		cout << "Student Number " << start+1 << endl;
		for(int ask=1; ask<ques+1; ask++)
		{
			cout << "Enter answer in question number " << ask << "(A,B,C,D,E)";
			cin >> ans;
			while(toupper(ans)<'A'||toupper(ans)>'E')
			{
				cout << "Invalid input" << endl;
				cin >> ans;
			}
			if(ask==2&&toupper(ans)=='A')
			{
				correct++;
			}
			if(ask==1&&toupper(ans)=='E')
			{
				correct++;
			}
			if(ask==3&&toupper(ans)=='C')
			{
				correct++;
			}
			
			if(correct==0)
			score=60;
		}
		score=correct/ques*50.0+50;	
		cout << "Student Number " << start+1 << " got " << correct << "/" << ques << " Grade is "  << score << endl;
	}
}
