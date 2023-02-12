#include <iostream>
using namespace std;

void Ex4p3() {

	double input{};

	cout << "Input any number between 1 and 100: " ;
	cin >> input ;

	if ((input < 100) && (input > 1)){
		if (input < 50){
			cout << "The number entered was less than 50" << endl;
		} else if (input > 50){
			cout << "The number entered was greater than 50" << endl;
		} else if (input == 50){
			cout << "The number entered was equal to 50" << endl;
		}
	} else {
		cout << "You must input a number between 1 and 100." << endl;
		return;
	}
}
