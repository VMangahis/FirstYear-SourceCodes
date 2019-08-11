#include<iostream>

using namespace std;


struct game
{
	char x;
	bool moved;
	
};

int main()
{
	bool p1_move=false;
	bool winner=false;
	int adjacent=0;
	int movep1, movep2;
	int pl_1=0, pl_2=0; 
	int move=0;
	game count[9];
	for(int y=0; y<9; y++)
		count[y].x='0'+y;
		
	refresh:
	system("cls");
	for(int y=0; y<9; y++)
	{
		cout << count[y].x << "                ";
		if(y==2||y==5)
		{
			cout << endl << endl;
		}	
	}
	
	if(count[0].x==count[1].x&&count[1].x==count[2].x)
	{
		if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
	}
	
		if(count[3].x==count[4].x&&count[4].x==count[5].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
		
	}
	
		if(count[6].x==count[7].x&&count[7].x==count[8].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
		
	}
	
	
	
	if(count[0].x==count[3].x&&count[3].x==count[6].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
		
	}
		if(count[1].x==count[4].x&&count[4].x==count[7].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
		
	}
	
		if(count[0].x==count[3].x&&count[3].x==count[6].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
		
	}
		if(count[2].x==count[5].x&&count[5].x==count[8].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
		
	}
	
	
	
	
		if(count[0].x==count[4].x&&count[4].x==count[8].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else 
		cout << "Winner! Player 2";
		
		return 0;
		
	}
	
		if(count[2].x==count[4].x&&count[4].x==count[6].x)
	{
			if(movep1>movep2)
		cout << "Winner! Player 1";
		
		else
		cout << "Winner! Player 2";
		
		return 0;
	}
	
	if(move==9)
	{
		cout << "Draw" << endl;
		return 0;
	}
	
	
	
	
	
		
		
		
	
	
	if(adjacent==3)
	{
		cout << "Winner declared" << endl;
		return 0;
	}
	
	if(adjacent<3)
	{
		adjacent=0;
	}
	
	if(winner==true)
	{
		cout << "Winner declared" << endl;
		return 0;
	}
	
	while(move!=9)
	{
	
	
	if(p1_move==false)
	{
	
	cout << "\n\nPlayer 1 input - X " << endl;
	cin >> pl_1;
	while(count[pl_1].x=='x'||count[pl_1].x=='o')
	{
		cout << "\n\nMove has already been made" << endl;
		cin >> pl_1;
	}
	count[pl_1].x='x';
	count[pl_1].moved=true;
	move++;
	movep1++;
	p1_move=true;
	goto refresh;
	}
	
	if(p1_move==true)
	{
		cout << "\n\nPlayer 2 input - O" << endl;
	cin >> pl_2;
		while(count[pl_2].x=='x'||count[pl_2].x=='o')
	{
		cout << "\nMove has already been made" << endl;
		cin >> pl_2;
	}
	count[pl_2].x='o';
	count[pl_2].moved=true;
	move++;
	movep2++;
	p1_move=false;
	goto refresh;
	}
	}//end while
	
	
	
	
	
	
	
	
	
	
	
	
}
