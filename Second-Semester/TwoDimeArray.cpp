#include<iostream>

using namespace std;

int main()
{
	int rows=0, cols=0;
	int numbers[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	cout << "Finding the index of Multi-Dimensional Array" << endl << "4 by 4 Matrix" << endl << endl;
	for(int row=0; row<4; row++)
	{
		cout << "Row: " << row+1;
		cout << endl;
		for(int col=0; col<4; col++)
		{
			
			cout << numbers[row][col];
			if(col<3)
			cout << ",";
		}
		cout << endl<<endl;
	}
	cout << "Row" << endl;
	cin>> rows;
	cout << "Column" << end
	cout << "The value of this index is: " << numbers[1][2];
}


