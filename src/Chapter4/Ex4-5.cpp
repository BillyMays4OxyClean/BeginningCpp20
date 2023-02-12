#include <iostream>
using namespace std;

void Ex4p5(){

	int mice{};
	int brown{};
	int white{};

	cout << "How many brown mice do you have? ";
	cin >> brown ;
	cout << "How many white mice do you have? ";
	cin >> white ;

	mice = brown + white ;

	mice == 1 ?
			cout << "It is a " << (brown == 1 ? "brown" : "white") << " mouse." :
			cout << "Of these mice, " << brown << (brown == 1 ? " is" : " are")  << " brown" << endl;

}
