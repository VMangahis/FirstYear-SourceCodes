//not finished on time

#include<iostream> // program to input number of students then input their names, birthdate; validation is the day in the month entered should be valid (e.g February should just allow date from 1-28)
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;

int main()
{
	int numstud=0;
	int inputs=0;
	int date=0;
	int tempdate=0;
	int tempyear=0;
	char resp=' ';
	string tempmonth="";
	string tempname="";
	string months[12]={"JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
	string student="";
	int quant[12];
	for(int init=0; init<12; init++)
	{
		quant[init]=0;
	}
	cout << "Enter the number of students" << endl;
	cin >> numstud;
	while(!cin)
	{
		cin.clear();
		cin.ignore(512,'\n');
		cout << "Input is invalid." << endl;
		cin >> numstud;
	}
	string *students=new string[numstud];
	string *birthmonth=new string[numstud];
	int *bdate=new int[numstud];
	int *year=new int[numstud];
	
	for(int input=0; input<numstud;input++) //start for input
	{
		int allstring=0;
		cout << "Input name of student" << endl;
		cin >> ws;
		getline(cin,student);
		transform(student.begin(),student.end(),student.begin(),::toupper);
		for(int checkstring=0;checkstring<student.size();checkstring++) // for making sure that string only contains letters
		{
			allstring=0;
			if(student[checkstring]>='0'&&student[checkstring]<='9')
			{
				allstring=1;
			}
			if(checkstring==student.size()-1)
			{
				allstring=0;
				students[input] = student;
				break;
			}
			if(allstring==1)
		{
			cout << "Invalid name" << endl;
			getline(cin,student);
			checkstring=-1;
		}
		}//end for checkstring
		cout << "Input the birthmonth" << endl;
		cin >> birthmonth[input];
		transform(birthmonth[input].begin(),birthmonth[input].end(),birthmonth[input].begin(),::toupper);
		
		for(int checkmonth=0;checkmonth<=11;checkmonth++) //validation of existing months
		{
			if(birthmonth[input]==months[checkmonth])
			{
				quant[checkmonth]+=1;
				break;
			}
			if(birthmonth[input]!=months[checkmonth]&&checkmonth==11)
			{
				cout << "Invalid birthmonth. Please try again."<<endl;
				cin >> birthmonth[input];
				transform(birthmonth[input].begin(),birthmonth[input].end(),birthmonth[input].begin(),::toupper);
				checkmonth=-1;
			}
		}//end existing month
		 //days with 31 (Jan,mar,may,july, august, october, dec)
		if(birthmonth[input]=="APRIL"||birthmonth[input]=="JUNE"||birthmonth[input]=="SEPTEMBER"||birthmonth[input]=="NOVEMBER")
		{
			cout << "Enter the day of birth in " << birthmonth[input] << " (1-30)" << endl;
			cin >> bdate[input];
			while(bdate[input]>30||bdate[input]<1)
			{
				cout << "Invalid day of birth, please try again" << endl;
				cin>>bdate[input];
			}
		}
		if(birthmonth[input]=="JANUARY"||birthmonth[input]=="MARCH"||birthmonth[input]=="MAY"||birthmonth[input]=="JULY"||birthmonth[input]=="AUGUST"||birthmonth[input]=="OCTOBER"||birthmonth	[input]=="DECEMBER")
		{
			cout << "Enter the day of birth in " << birthmonth[input] << " (1-31)" << endl;
			cin >> bdate[input];
			while(bdate[input]>31||bdate[input]<1)
			{
				cout << "Invalid day of birth, please try again" << endl;
				cin>>bdate[input];
			}
		}
		if(birthmonth[input]=="FEBRUARY")
		{
			cout << "Enter the day of birth in " << birthmonth[input] << " (1-28)" << endl;
			cin >> bdate[input];
			while(bdate[input]>28||bdate[input]<1)
			{
				cout << "Invalid day of birth, please try again" << endl;
				cin>>bdate[input];
			}	
		}
		
		cout << "Input birthyear" << endl;
		cin >> year[input];
		while(!cin)
		{
			cin.clear();
			cin.ignore(512,'\n');
			cout << year[input] << " is an invalid birthyear." << endl;
			cin >> year[input];
		}
		if(input<numstud-1)
		{
			cout << "Proceed to input another entry(Y/N)?" << endl;
			cin>>resp;
			while(toupper(resp)!='Y'&&toupper(resp)!='N')
			{
				cout << "Invalid response" << endl;
				cin >> resp;
			}
		}
		if(toupper(resp)=='N')
		{
			break;
		}
			inputs++;
		
		
	} // end for input
	for(int sort=0;sort<=inputs;sort++)// sorting algo start
	{
		for(int sort2=0;sort2<=inputs-sort;sort2++)
		{
			if(year[sort2]<year[sort2+1])
			{
			tempname=students[sort2];
			students[sort2]=students[sort2+1];
			students[sort2+1]=tempname;
			tempyear=year[sort2];
			year[sort2]=year[sort2+1];
			year[sort2+1]=tempyear;
			tempdate=bdate[sort2];
			bdate[sort2]=bdate[sort2+1];
			bdate[sort2+1]=tempdate;
			tempmonth=birthmonth[sort2];
			birthmonth[sort2]=birthmonth[sort2+1];
			birthmonth[sort2+1]=tempmonth;
			}
		}
	}// end sorting 
	for(int out=0; out<inputs; out++)
	{
		cout << left << students[out] << right << setw(20) << year[out] << right << setw(20) << bdate[out] << right << setw(20) << birthmonth[out] << endl;
	}
	cout << endl;
	for(int mon=0; mon<12; mon++)
	{
		cout << months[mon] << " "<< quant[mon] << endl;
	}
}
