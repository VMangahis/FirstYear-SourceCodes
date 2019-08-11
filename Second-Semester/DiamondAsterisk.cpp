#include<iostream>

int main()
{
	for(int x=1x; x<=3; x++)
	{
			std::cout<<"  ";
			
			for(int y=0; y<x; y++)
			{
				
				std::cout<<"*";
			}
			if(x<3)
			std::cout<<std::endl;
			if(x==3)
			{
				std::cout<<std::endl;
				for(int x=0; x<2; x++)
				{
					std::cout<<"  ";
					for(int y=2; y>x; y--)
					{
						std::cout<<"*";
					}
					std::cout<<std::endl;
				}
			}
	}
	system("pause");
	return 0;
}
