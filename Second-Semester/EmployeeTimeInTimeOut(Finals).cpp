#include<iostream>
#include<fstream>
#include<windows.h>
#include<ctime>
#include<string>

using namespace std;







int main()
{
	int location=0;
	char logout=' ';
	const int hourly_rate=585;
	int numberofemployees=0;
	string admin_login;
	string admin_password;
	string username, password;
	tm TM;
	
	
	cout << "Enter number of employees" << endl;
	cin >> numberofemployees;
	

	struct employees{
		string name;
		string username;
		string address;
		string password;
		float salary;
		int timein_hour;
		int timeout_hour;
		int timein_min;
		int timeout_min;
	};
	
	
	employees login_details[numberofemployees];
	for(int initialize=0; initialize<numberofemployees; initialize++)
	{
		login_details[initialize].salary=0;
		login_details[initialize].timein_hour=0;
		login_details[initialize].timeout_hour=0;
		login_details[initialize].timein_min=0;
		login_details[initialize].timeout_min=0;
	}
	ofstream employee("Employee.txt");
	ofstream attendance("Attendance.txt");
	
	
	cout << "Input admin username" << endl;
	cin >> login_details[0].username;
	cout << "Input admin password" << endl;
	cin >> login_details[0].password;
	
	
	for(int a=1; a<numberofemployees; a++)
{

	cout << "Input name of employee # " << a << endl;
	cin >> login_details[a].name;
	cout << "Input address of employee # " << endl;
	cin >> login_details[a].address;
	cout << "Input username" << endl;
	cin >> login_details[a].username;
	cout << "Input password" << endl;
	cin >> login_details[a].password;
/*	cout << "Input time-in (hour)" << endl;
	cin >> login_details[a].timein_hour;
	cout << "Input time-in (minutes)" << endl;
	cin>> login_details[a].timein_min;
	cout << "Input time-out (hour)" << endl;
	cin >> login_details[a].timeout_hour;
	cout << "Input time-out (minutes)" << endl;
	cin>> login_details[a].timeout_min;
	login_details[a].salary+=(login_details[a].timein_hour-login_details[a].timeout_hour)*hourly_rate;*/
	}
	login:
	system("cls");
	
	cout << "Login" << endl;
	cout << "Login Username" << endl;
	cin >> username;
	
	
	
	
	/*string name;
		string username;
		string address;
		string password;
		float salary;*/
	
	
	
	for(int checkuser=0; checkuser<numberofemployees; checkuser++)
	{
		if(username==login_details[checkuser].username)
		{
			location=checkuser;
			break;
		}
		else if(username!=login_details[checkuser].username && checkuser==numberofemployees-1)
		{
			cout << "Username does not exist" << endl;
			cin >> username;
			checkuser=-1;
		}
	}
	cout << "Input password" << endl;
	cin >> password;
	
	while(password!=login_details[location].password)
	{
		cout << "Invalid Password" << endl;
		cin >> password;
	}
	
	if(location==0)
	{
			time_t t=time(0);
		tm* timenow= localtime(&t);
		login_details[0].timein_hour=(timenow->tm_hour);
		login_details[0].timein_min=(timenow->tm_min);
		for(int employeeinfo=0; employeeinfo<numberofemployees; employeeinfo++)
		{
			
			cout << "Welcome Admin!" << endl;
			cout << "Employee Info" << endl;
			cout << "Employee #" << employeeinfo << endl;
			cout << "Name" << endl;
			cout << login_details[employeeinfo].name << endl;
			cout << "Address" << endl;
			cout << login_details[employeeinfo].address << endl;
			cout << "Salary" << endl;
			cout  << login_details[employeeinfo].salary << endl;
			
			
			
			
		}
		cout << "Input x to logout" << endl;
			cin >> logout;
			if(logout=='y')
			{
				goto end;
			}
			if(logout=='x')
			{
				cout << "Input time-out (hour)" << endl;
			cin >> login_details[0].timeout_hour;
			cout << "Input time-out(minute)" << endl;
			cin >> login_details[0].timeout_min;
			login_details[0].salary+=(login_details[0].timein_hour-login_details[0].timeout_hour)*hourly_rate;
				goto login;
			}
	}

	
	if(location>0)
	{
		time_t t=time(0);
		tm* timenow= localtime(&t);
		login_details[location].timein_hour=(timenow->tm_hour);
		login_details[location].timein_min=(timenow->tm_min);
		cout << "Login successful!" << endl;
		cout << "Welcome " << login_details[location].name << endl;
		cout << (timenow->tm_hour) << ": " << (timenow->tm_min) << ": " << (timenow->tm_sec) << endl;
		cout << "Name" << endl;
	 	cout << login_details[location].name << endl;
	 	cout << "Address" << endl;
	 	cout << login_details[location].address << endl;
	 	cout << "Salary" << endl;
	 	cout << login_details[location].salary << endl;
	 	
	 		
			
	 	
	 		
	 		
			cout << "Input x to logout " << endl;
	 	
	 	cin >> logout;
	 	if(logout=='x')
			{
				cout << "Input time-out (hour)" << endl;
			cin >> login_details[location].timeout_hour;
			cout << "Input time-out(minute)" << endl;
			cin >> login_details[location].timeout_min;
			login_details[location].salary+=(login_details[location].timein_hour-login_details[location].timeout_hour)*hourly_rate;
				goto login;
			}
			
		
			
	}
	
	end:
	if(username=="xxxx" || logout=='y')
	{
		for(int encode_info=0; encode_info<numberofemployees; encode_info++)	
		{
			employee << "Name: " << login_details[encode_info].name << endl;
			employee << "Address: " << login_details[encode_info].address << endl;
			employee << "Salary: " << login_details[encode_info].salary << endl;
		}
		
		for(int encode_att=0; encode_att<numberofemployees; encode_att++)
		{
			attendance << "Employee " << encode_att<<endl;
			attendance << "Time in: " << login_details[encode_att].timein_hour << ": " << login_details[encode_att].timein_min << endl;
			attendance << "Time out: " << login_details[encode_att].timeout_hour << ": " << login_details[encode_att].timeout_min << endl;
		}
		employee.close();
		attendance.close();
		
		cout << "Employee Log Recorded!" << endl;
		return 0;
	}
	
	
	
	
	 
	
	
	
	
	
			
      system("pause");
}
