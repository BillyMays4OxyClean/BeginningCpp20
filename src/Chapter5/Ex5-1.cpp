
#include <iostream>
#include <cmath>
using namespace std;


void Ex5p1() {

	int n{};

	cout << "This program will show the squares of odd integers from 1 to the user specified limit." << endl;
	cout << "Please indicate the upper limit: ";
	cin >> n;

	for (int i{}; i < n; i++)
	{
		int is_odd{pow(-1,i) == -1 ? 1 : 0 } ;

		if (is_odd)
		{
			cout << (pow(i,2)) << ", ";
		}
	}

}
