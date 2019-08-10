#include <iostream>

using namespace std;

int main() 
{
	int numtext, mincall, callothernet;
	float textcost = 0.0;
	float callcost = 0.0;
	float basepay = 0.0;
	float othernetcost = 0.0;
	char choice;
	cout << "This program will compute the cellphone bill you currently have. Plans are provided below(maximize this window)" << endl;
	cout << "|Plan|\t Free Text\t| Free Call\t      |  Base Pay\t| Cost of Text beyond Free Text| Cost of call beyond promo";
	cout << "\n| A  |100 to any network| 15 min. same network|\t P 300.00\t| P 1.00/msg\t\t       | P 4.50 per min";
	cout << "\n| B  |200 to any network| 45 min. same network|\t P 500.00\t| P 0.75/msg\t\t       | P 4.00 per min";
	cout << "\n| C  |unlimited text    | 100 min. any network|\t P 1200.00\t| ~\t\t               | P 3.00 per min" << endl;
	
	cout << "\nEnter 	the plan you had chosen (a, b, c)" << endl;
	cin >> choice;
	switch (choice)
	{
		case 'a':
			cout << "Enter the number of texts you had sent so far" << endl;
			cin >> numtext;
			if(numtext > 100)
			{
				textcost = numtext - 100;
			}
			basepay = 300.0;
			cout << "How many minutes of call did you make at same network?" << endl;
			cin >> mincall;
			if(mincall > 15)
			{
				callcost = (mincall - 15)*4.5;
			}
			cout << "How many minutes of call did you make at other networks?" << endl;
			cin >> callothernet;
			if(callothernet > 0)
			{
				othernetcost = callothernet*4.5;
			}
			break;
			case 'b':
			cout << "Enter the number of texts you had sent so far" << endl;
			cin >> numtext;
			if(numtext > 200)
			{
				textcost = (numtext - 200)*.75;
			}
			basepay = 500.0;
			cout << "How many minutes of call did you make at the same network?" << endl;
			cin >> mincall;
			if(mincall > 45)
			{
				callcost = (mincall - 45)*4;
			}
			cout << "How many minutes of call did you make at other networks?" << endl;
			cin >> callothernet;
			if(callothernet > 0)
			{
				othernetcost = callothernet*4.5;
			}
			break;
			case 'c':
			basepay = 500.0;
			cout << "How many minutes of call did you make?" << endl;
			cin >> mincall;
			if(mincall > 100)
			{
				callcost = (mincall - 100)*3;
			}
			break;
			
		default:
			cout << "Input Error: Try Again";
			return 0;
			break;
		}
	cout << "Amount To Pay" << endl;
	cout << "Base Pay:" << "P " << basepay;
	cout << "\nText:" << "P " << textcost;
	cout << "\nCall:" << "P "	<< callcost+othernetcost;
	cout << "\nTotal Amount to Pay:" << "P " << basepay+textcost+(callcost+othernetcost);
	return 0;		
}

/*Assignment
Study looping - > "for" "while" and "do while" */
