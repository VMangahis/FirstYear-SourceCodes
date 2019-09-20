#include <iostream>

using namespace std;

int main()
{
	int rmnum, seatcap, enrolled;
	int emptySeat;
	cout << "This program will indicate the availability of the classrooms." << endl;
	cout << "Enter the room number: " << endl;
	cin >> rmnum;
	cout << "Enter the total seat capacity of the classroom: " << endl;
	cin >> seatcap;
	cout << "Enter the current number of enrollment in the specified room number: " << endl;
	cin >> enrolled;
	cout << "Room\t  Seat Capacity\t    Enrollment\t   Empty Seats\t    Filled/Not Filled" << endl;
	if(seatcap-enrolled <= 0)
	{
        emptySeat = 0;
		cout << rmnum << "\t\t" << seatcap << "\t\t" << enrolled << "\t\t" << emptySeat << "\t\t" << "Filled" << endl;
	}
	else
	{
		 cout << rmnum << "\t\t" << seatcap << "\t\t" << enrolled << "\t\t" << seatcap-enrolled << "\t\t" << "Not Filled" << endl;
	}
	return 0;
}
