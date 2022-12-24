#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Ex3p2() {

	double length{};
	double depth{};

	double box_side{};

	string input{};

	cout << "Enter the length of the shelf followed by its depth in feet: " ;
	cin >> length >> depth ;

	cout << "Enter a side length of the box to fit on the shelf: " ;
	cin >> box_side ;
	cout << endl;

	const int inches_per_foot{12};

	double box_side_converted{box_side/inches_per_foot};

	double box_area{pow(box_side_converted, 2)};

	double shelf_area{length * depth};

	cout << "The shelf will fit " << floor(shelf_area/box_area) << " boxes." << endl;

}
