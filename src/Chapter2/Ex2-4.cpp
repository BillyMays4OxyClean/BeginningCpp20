#include <iostream>
#include <cmath>
using namespace std;

void Ex2p4() {

	int w{};
	int height_ft{};
	int height_inches{};

	double lbs_to_kilos{2.2} ;
	double meters_to_feet{.3048} ;

	cout << "BMI Calculator. Enter your weight in lbs: " ;
	cin >> w ;
	cout << endl;

	cout << "Enter your height in feet followed by your remaining height in inches: " ;
	cin >> height_ft >> height_inches ;

	// Converting units
	w /= lbs_to_kilos;

	double height{height_ft + static_cast<double>(height_inches)/12};
	height *= meters_to_feet;

	double bmi{w/pow(height,2)};

	cout << "Your bmi is " << bmi << endl;

}
