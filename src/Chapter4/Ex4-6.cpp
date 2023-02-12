#include <iostream>
using namespace std;

void Ex4p6(){

	int input{};

	cout << "Enter an integer: ";
	cin >> input ;

	if (input < 20) {
		cout << "Value is less than 20" << endl;
	} else if ((input > 20) && (input < 30)){
		cout << "Value is greater than 20 but less than 30" << endl;
	} else if ((input > 30) && (input < 100)){
		cout << "Value is greater than 30 but less than 100" << endl;
	} else if (input > 100) {
		cout << "Value is greater than 100" << endl;
	}

}
