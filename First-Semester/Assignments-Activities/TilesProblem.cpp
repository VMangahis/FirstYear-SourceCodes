#include <iostream>

using namespace std;

int main()
{
	int numoftiles, exttiles;
	float ltiles, wtiles, lfloor, wfloor, areafloor, areatiles;
	cout << "This program will compute the number of tiles needed to the given length and width of floor and the tiles" << endl;
	cout << "Enter the length of floor (in meters)" << endl;
	cin >> lfloor;
	cout << "Enter the width of floor (in meters)" << endl;
	cin >> wfloor;
	cout << "Enter the length of the tiles (in centimeters)" << endl;
	cin >> ltiles;
	cout << "Enter the width of the tiles (in centimeters)"<< endl;
	cin >> wtiles;
	areafloor = lfloor*wfloor*10000;
	areatiles = ltiles*wtiles;
	numoftiles = areafloor/areatiles;
	exttiles = (numoftiles*.15) + numoftiles;
	cout << "Number of Tiles needed: " << numoftiles << endl;
	cout << "For the cases of cuts, breaks or wastes, buy " << exttiles << " tiles instead" << endl;
	return 0;
 }
	
