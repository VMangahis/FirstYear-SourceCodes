#include<iostream>

using namespace std;

int main()
{
	int temp;
	int matrix[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	cout << "Swap index two dimensional array" << endl;
	for(int row=0; row<sizeof(matrix)/sizeof(matrix[0]); row++)
	{
		for(int col=1; col<sizeof(matrix[0])/sizeof(matrix[0][0])-1; col++)
		{
			temp=matrix[row][col];
			matrix[row][col]=matrix[row][col+1];
			matrix[row][col+1]=temp;
		}
	}
	for(int outr=0; outr<sizeof(matrix)/sizeof(matrix[0]); outr++)
	{
		for(int outc=0; outc<sizeof(matrix[0])/sizeof(matrix[0][0]);outc++)
		{
			cout << matrix[outr][outc] << " ";
		}
		cout << endl;
	}
	system("pause");
}   

