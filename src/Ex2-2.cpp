#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

void Ex2p2() {

	double radius{} ;

	cout << "Input a radius of a circle to calculate its area: " ;
	cin >> radius ;
	double area{M_PI * pow(radius, 2)} ;

	cout << "The area of the circle is: " << area ;

}
