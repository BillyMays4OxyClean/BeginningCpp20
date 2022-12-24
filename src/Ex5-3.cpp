#include <iostream>
#include <string>
using namespace std;

void Ex5p3()
{
	string input;

	cout << "Enter a string with no spaces, the characters will be counted up until a '#'" << endl;
	cin >> input;

	auto char_pos = input.find_first_of('#');
	if ( char_pos != string::npos)
	{
		cout << "Number of characters is " << char_pos << endl;
	}
	else
	{
		cout << "No '#' character was detected in the string input." << endl;
	};
};

