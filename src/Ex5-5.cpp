#include <iostream>
using namespace std;

void Ex5p5()
{
	char input[1000]{};

	cout << "Input a string to be stored no larger than 1000 characters long:" << endl;
	cin.getline(input, sizeof(input));

	size_t i{};
	unsigned int length{};

	while (i < sizeof(input) && input[i] != '\0') {i++; length++;}

	i = length;
	while (i <= length) {cout << input[i]; --i;}

};
