#include<iostream>

int main()
{
	int first=0;
	int second=1;
	
	int rows=0;
	int col=0;
	std::cout << "Input rows" << std::endl;
	std::cin>> rows;
	std::cout<<"Input columns" << std::endl;
	std::cin>> col;
	int numbers[col][rows];
	for(int tocol=0; tocol<col; tocol++)
	{
		for(int torow=0; torow<rows; torow++)
		{
		int sum=first+second;	
		std::cout << sum;
		if(torow<rows-1)
		{
			std::cout << ",";
		}
		first=second;
		second=sum;
		}
		
		std::cout << std::endl;
	}
}
