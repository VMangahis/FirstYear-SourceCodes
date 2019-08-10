#include<ctime>
#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<time.h>
using namespace std;

int main()
{
	int nomeals=0;
	int inputmeal=0;
	char date[9];
	int quit=0;
	_strdate(date);
	int trans=0;
	int orders=0;
	float perprice=0.0;
	float sales=0.0;
	int prevorder=0;
	int codechk=0;
	int quantity=0;
	string ordercode;
	string custname="";
	string resp="";
	int total =0;
	int cust=0;
	int exist =0;
	float pay=0.0;
	int tempquant=0;
	char choice=' ';
	string tempdesc="";
	string tempmealcode="";
	float tempprice=0.0;
	float tempamount=0.0;
	//SCR A 
	cout <<"*"<<right <<setw(40)<<"Good Day!"<<"\t\t\t\t      *" << endl;
	cout<<"*" <<right<<setw(38)<< "Today is: " << date<<"\t\t\t\t      *" <<endl;
	cout<<"*" <<right<<setw(41)<< "Welcome to"<<"\t\t\t\t      *"<< endl;
	cout<<"*"<<right<<setw(43)<<"Meh Restaurant"<<"\t\t\t\t      *"<< endl;
	for(int design=0; design<40; design++)
	{
		cout << "* ";
	}
	cout << "\n";
	system("pause"); // for screen clear only
	system("cls");
	cout << "Please enter menu for today" << endl; // Start SCREEN B 
	cout << "How many meals?" << endl;
	cin >> nomeals;
	while(!cin)
	{
		cin.clear();
		cin.ignore(512,'\n');
		cout << "Invalid Input" << endl;
		cin >> nomeals;
	}
	string *mealcode=new string[nomeals];
	string *desc=new string[nomeals];
	float *perorder=new float[nomeals];
	int *quant=new int[nomeals];
	float *price=new float[nomeals];
	string *ordered=new string[nomeals];
	string *orderdesc=new string[nomeals];
	float *orperorder=new float[nomeals];
	float *finalamount=new float[nomeals];
	int *finalquant=new int[nomeals];
	for(inputmeal=0;inputmeal<nomeals;inputmeal++)
	{
		cout << endl;
		cust=0;
		cout << "Code:"<<endl;
		cin >> mealcode[inputmeal];
		transform(mealcode[inputmeal].begin(),mealcode[inputmeal].end(),mealcode[inputmeal].begin(),::toupper);
		for(int checkcode=0; checkcode<inputmeal;checkcode++)
		{	
			if(mealcode[inputmeal]==mealcode[checkcode])
			{
				cout << "Code already exists. Try again" << endl;
				cin >> mealcode[inputmeal];
				transform(mealcode[inputmeal].begin(),mealcode[inputmeal].end(),mealcode[inputmeal].begin(),::toupper);
				checkcode=-1;
			}
		} 
		cout << "Description:"<<endl;
		cin>>ws;
		getline(cin,desc[inputmeal]);
		transform(desc[inputmeal].begin(),desc[inputmeal].end(),desc[inputmeal].begin(),::toupper);
		for(int checkdesc=0; checkdesc<inputmeal;checkdesc++)
		{	
			if(desc[inputmeal]==desc[checkdesc])
			{
				cout << "Description already exists. Try again" << endl;
				cin >> desc[inputmeal];
				transform(desc[inputmeal].begin(),desc[inputmeal].end(),desc[inputmeal].begin(),::toupper);
				checkdesc=-1;
			}
		}
		cout << "Price per order:"<<endl;
		cin >> perorder[inputmeal];
		while(!cin)
		{
			cin.clear();
			cin.ignore(512,'\n');
			cout << "Invalid price input" << endl;
			cin >> perorder[inputmeal];
		}
		quant[inputmeal]=0;
		finalquant[inputmeal]=0;
		
	} // END screen B
	system("cls");
		cout << "Today's Menu" << endl;
		cout << endl;
		cout << "Order Code" << setw(20) << "Description" << setw(20) << "Price per Order" << endl;
		for(int display=0; display < nomeals; display++)
		{	
			cout << left << setw(25)<< mealcode[display] << desc[display]
			 <<fixed<<setprecision(2)<<right<< setw(20) << perorder[display] << endl;
		}
	do{
		custname=""; //customer order SCR C
		trans++;
		cout << endl << endl;
		cout << "Transaction #:" << trans << endl;
		cout << "Customer's Name" << endl;
		orders=0;
		for(int reset=0; reset<nomeals; reset++)
		{
			quant[reset]=0;
			price[reset]=0;
			pay=0.0;
			
		}
			cin >> ws;
			getline(cin,custname);
			cust++;
			transform(custname.begin(),custname.end(),custname.begin(),::toupper);
			if(custname=="XXX")
			{
				cust-=1;
				break;
				
			}
		
		while(custname!="XXX")
		{	
			cout << "Enter order code" << endl; // error when wrong input in 3nd input
			cin >> ordercode;
			transform(ordercode.begin(),ordercode.end(),ordercode.begin(),::toupper);

		if(ordercode=="XXX")
		{
			break;
		}
		for(codechk=0;codechk<nomeals;codechk++) //validate meal for the day v v v v
			{
				if(mealcode[codechk]==ordercode)
				{
					break;
				}
				if(mealcode[codechk]!=ordercode&&codechk==nomeals-1)
				{
				cout << "Invalid meal code. Try Again" << endl;
				cin >> ordercode;
				transform(ordercode.begin(),ordercode.end(),ordercode.begin(),::toupper);
				codechk=-1;
			if(ordercode=="XXX")
			{
			quit=1;
			break;
		
			}
			
				}
			}
			if(quit==1)
			{
				quit=0;
				break;
			}
		
			cout << "Enter the quantity of your order" << endl;
			cin >> quantity;
			while(!cin)
			{
				cin.clear();
				cin.ignore(512,'\n');
				cout << "Invalid quantity input. Please try again " << endl;
				cin >> quantity;
			}
			
		for(int addord=0;addord<nomeals;addord++) //calculate orders
		{
			exist=0;
			for(int checksame=0;checksame<orders; checksame++) // for checking same orders
			{
				
				if(ordercode==ordered[checksame])
				{
					for(int checkperorder=0;checkperorder<nomeals;checkperorder++) // adjusting the per price value by checking
					{
						if(ordercode==mealcode[checkperorder])
						{
							perprice=perorder[checkperorder];
						}
					}	
				quant[checksame]+=quantity;  
				price[checksame]+=(perprice*quantity);
				orders-=1;
				exist=1;
				break;
				}
			}//end for loop checksame
			if(exist==1)
			{
				break;
			}																				
			if(ordercode==mealcode[addord]) // for adding diff orders
			{
				price[orders]+=(perorder[addord]*quantity);
				quant[orders]+=quantity;
				ordered[orders]=ordercode;
				orderdesc[orders]=desc[addord];
				orperorder[orders]=perorder[addord];
			}
			
		}
		orders++;
			
		}//end while(custname!="XXX")
	


	if(custname!="XXX")
	{
		system("cls");
		cout << endl;
		cout << "Official Receipt" << endl;
		cout << "Customer's Name:" << custname << endl;
		cout << "Code" <<setw(15)<< "Description" << setw(15) << "Qty" << setw(15) << "Price" << setw(15) << "Amount" << endl;
		for(int receipt = 0; receipt < orders; receipt++)
		{
			cout << ordered[receipt] << setw(15) << orderdesc[receipt] 
			<< setw(15) << quant[receipt] << setw(15)<<fixed
			<< setprecision(2) << orperorder[receipt] << setw(19) 
			<< price[receipt] << endl;
			for(int summ=0; summ<nomeals; summ++)
			{
				if(ordered[receipt]==mealcode[summ])
				{
					finalquant[summ]+=quant[receipt];
					break;
				}
			}
		}
		
		for(int total=0; total<orders; total++)
		{
			pay+=price[total];
		}
		for(int line=0; line<70; line++)
		{
			cout << "-";
		}
		cout << endl;	
		cout << "Please pay:"<< setw(51) << "P " 
		<<fixed << setprecision(2)<< pay <<endl;
		sales+=pay;
 	}
 	}while(custname!="XXX"||ordercode!="XXX");
 	for(int sort=0; sort<nomeals-1; sort++)
	 {
	 	for(int sort2=0; sort2<nomeals-sort-1; sort2++)
	 	{
	 		if(finalquant[sort2]<finalquant[sort2+1])
	 		{
	 			tempquant=finalquant[sort2];
	 			finalquant[sort2]=finalquant[sort2+1];
	 			finalquant[sort2+1]=tempquant;
	 			tempdesc=desc[sort2];
	 			desc[sort2]=desc[sort2+1];
	 			desc[sort2+1]=tempdesc;
	 			tempmealcode=mealcode[sort2];
				mealcode[sort2]=mealcode[sort2+1];
				mealcode[sort2+1]=tempmealcode;	 	
	 			tempprice=perorder[sort2];
	 			perorder[sort2]=perorder[sort2+1];
	 			perorder[sort2+1]=tempprice;
	 	
			 }
		}
	 }	
	system("cls");
	cout << "Sales for " << date << endl;
	cout << "Total number of customers: " << cust << endl;
	cout << endl;
	cout << "Meal Code" << setw(15) << "Description" 
	<< setw(15)<<right << "Unit Price" << setw(15)
	<<right << "Qty Ordered" << setw(15)<<right << "Amount" << endl;
	for(int sales=0; sales < nomeals; sales++)
	{
		cout << mealcode[sales] << setw(18) 
		<< desc[sales] << setw(16)<< right 
		<< perorder[sales] << setw(13)<< right 
		<< finalquant[sales] << setw(20)<<right << perorder[sales]*finalquant[sales] << endl;
	}
	for(int lines=0; lines<70;lines++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "Total Sales" << setw(51) 
	<< fixed << setprecision(2) << "P " << sales<<endl;
	cout <<setw(47)<< right << "\t\t\t\t    =========" << endl;
	
	system("pause");
	
}


