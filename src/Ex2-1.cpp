#include <iostream>

using namespace std;

void Ex2p1() {

	int inches{};
	cout << "Input a number of inches to convert to feet: " ;
	cin >> inches ;

	if (inches)
	{
		cout << inches << " inches converts to " << (static_cast<float>(inches) / 12) << " feet." << endl;
	} else {
		cout << "Nooooo! You can't input 0!" << endl;
	}

}
