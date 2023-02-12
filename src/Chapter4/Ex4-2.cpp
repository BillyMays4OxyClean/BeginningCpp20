#include <iostream>
using namespace std;

void Ex4p2() {

	int a{};
	int b{};

	cout << "Enter two integers to be compared: " ;
	cin >> a >> b ;

	if (a <= 0){
		cout << "Please enter a positive, nonzero integer." << endl;
		return;
	}

	if (b <= 0){
		cout << "Please enter a positive, nonzero integer." << endl;
		return;
	}

	a = static_cast<unsigned int>(a);
	b = static_cast<unsigned int>(b);

	if (a > b){
		cout << a << " is bigger than " << b << endl;
	} else if (b > a) {
		cout << b << " is bigger than " << a << endl;
	}

}
