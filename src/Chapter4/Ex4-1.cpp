#include <iostream>
using namespace std;

void Ex4p1() {

	int a{};
	int b{};

	cout << "Enter two integers to be compared: " ;
	cin >> a >> b ;

	if (a > b) {
		cout << "a is larger than b" << endl;
	} else {
		cout << "b is larger than a" << endl;
	}

}
