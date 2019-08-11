#include<iostream>
#include<fstream>
#include<windows.h>

using namespace std;

int corr_cred;
int dep_value;
int wit_value;


void Timer(int sec)
{
	Sleep(sec*1000);
}


float Deposit()
{
	cout << "How much do you want to deposit" << endl;
	cin >> dep_value;
	return dep_value;
	
}

float Withdraw()
{
	cout << "How much do you want to withdraw" << endl;
	cin >> wit_value;
	return wit_value;
	
}






int main()
{
	int correct_accnum;
	int accnumb;
	string pass;
	int trans;
	
int number_dep;
	
	
	cout << "Enter number of depositor/s" << endl;
	cin>> number_dep;
		
	struct addr_detail{
		string city;
		string province;
	};
	
struct person {
		string fullname;
		addr_detail addr_dt;
		int acc_num;
		float balance;
		string password;	
	}dep[number_dep];
	
	ofstream bankaccount("bankaccs.txt");
	
	
	
	
	
	
	for(int i=0; i<number_dep; i++)
	{
		
		
		cout << "Depositor Information" << endl;
		cout << "Enter full name " << endl;
		cin >>dep[i].fullname;
	
		
		cout << "Enter full city" << endl;
		cin >> ws;
		getline(cin, dep[i].addr_dt.city);
	
		
		cout << "Enter full province" << endl;
		cin >> ws;
		getline(cin, dep[i].addr_dt.province);
	
		
		
		cout << "Enter account number" << endl;
		cin >> dep[i].acc_num;
	
		
		
		cout << "Enter balance" << endl;
		cin >> dep[i].balance;
	
		cout << "Enter password" << endl;
		cin >> dep[i].password;
	
	}
	
	cout << "Input complete!" << endl;
	
	
	input:
	system("cls");
	cout << "Enter account number" << endl;  //
	cin >> accnumb;
	for(int check_accnumb=0; check_accnumb<sizeof(dep)/sizeof(dep[0]); check_accnumb++)
	{
		if(accnumb==dep[check_accnumb].acc_num)
		{
			correct_accnum=check_accnumb;
			break;
		}
		else if(accnumb!=dep[check_accnumb].acc_num && check_accnumb==sizeof(dep)/sizeof(dep[0])-1)
		{
			cout << "Account number not found. Try again!" << endl;
			cin >> accnumb;
			check_accnumb=-1;
		}
	}
	
	cout << "Enter password" << endl;
	cin >> pass;
	for(int check_pass=0; check_pass<sizeof(dep)/sizeof(dep[0]); check_pass++)
	{
		if(pass==dep[correct_accnum].password)
		{
			break;
		}
		
		else if(pass!=dep[correct_accnum].password&&check_pass==sizeof(dep)/sizeof(dep[0])-1)
		{
			cout << "Invalid password" << endl;
			cin >> pass;
			check_pass=-1;
		}
	}
	cout << "Data credentials verified!" << endl;
	
	transact:
	cout << "What transaction do you want do? 1- Deposit 2- Withdraw 3-Exit"  << endl;
	cin >> trans;
	switch(trans)
	{
		case 1: dep[correct_accnum].balance+=Deposit(); 
		cout << "Final Balance" << dep[correct_accnum].balance << endl; 
		cout << "Screen will clear in 5 seconds" << endl;
		Timer(5);
		goto input; 
		break;
		
		case 2: 
		dep[correct_accnum].balance-=Withdraw(); 
		cout << "Final Balance" << dep[correct_accnum].balance << endl;
		cout << "Screen will clear in 5 seconds" << endl;
		Timer(5);
		goto input; 
		break;
		
		case 3:
			for(int i=0; i<number_dep; i++)
			{
			
				bankaccount << "Name\n";
		bankaccount << dep[i].fullname;
			bankaccount << "\nCity\n";
		bankaccount << dep[i].addr_dt.city;
			bankaccount << "\nProvince\n";
		bankaccount << dep[i].addr_dt.province;
			bankaccount << "\nAccount Number\n";
		bankaccount << dep[i].acc_num;
			bankaccount << "\nBalance\n";
		bankaccount << dep[i].balance;
			bankaccount << "\nPassword\n";
		bankaccount << dep[i].password;
		}
		return 0;
		
		bankaccount.close();
		
		default: goto transact;
	}
	bankaccount.close();
}

