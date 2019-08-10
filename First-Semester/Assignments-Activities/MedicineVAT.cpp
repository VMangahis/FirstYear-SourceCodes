#include <iostream>

using namespace std;

int main()
{	
	float medcost, medcost2, discount, medcost1, vatexmpt; 
	cout << "This program will compute the amount that seniors will only pay to the total cost of his/her medicine while including the discounts and excluding VAT." << endl;
	cout << "Enter the total cost of the medicine to be paid" << endl;
	cin >> medcost;
	medcost2 = (medcost/1.12)*.8;
	medcost1 = (medcost/1.12);
	discount = medcost1*.2;
	vatexmpt = medcost - medcost1;
	cout << "Amount to be paid: P " << medcost2 << endl;
	cout << "Senior Citizen Discount(20%): " << "P " << discount << "\nVAT Excemption(12%): " << "P "<< vatexmpt << endl;
	system("pause");
	return 0;
}



