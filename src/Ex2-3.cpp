#define _USING_MATH_DEFINES

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Ex2p3() {

	float h{} ;
	double phi{} ;

	float tree_feet{};
	float tree_inches{};

	cout << "Treebot.exe V1" << endl;
	cout << "Input a height, in inches: " ;
	cin >> h ;
	cout << "Input the amount of feet from the tree: " ;
	cin >> tree_feet ;
	cout << "Input the remaining inches away from the tree: " ;
	cin >> tree_inches ;

	float d{tree_feet + tree_inches/12} ; // Combine the two d_xx variables into one.

	cout << "Input the angle in degrees: " ;
	cin >> phi ;

	phi *= M_PI / 180 ; // Convert from degrees to rads

	float tree_height{(h/12) + d*static_cast<float>(tan(phi))} ;

	cout << "The height of the tree is " << tree_height << " feet." << endl;

}
