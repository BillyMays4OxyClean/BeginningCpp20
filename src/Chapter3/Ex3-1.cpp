
#include <iostream>
using namespace std;


void Ex3p1() {

	int stuff{} ;

	cout << "Enter an integer: " ;
	cin >> stuff ;
	cout << endl;

	unsigned int unsigned_inverted_stuff{~stuff} ;
	signed int inverted_stuff{~stuff} ;

	cout << stuff << "|" << unsigned_inverted_stuff << "|" << (unsigned_inverted_stuff + 1) << endl;
	cout << stuff << "|" << inverted_stuff << "|" << (inverted_stuff + 1) << endl;

}

