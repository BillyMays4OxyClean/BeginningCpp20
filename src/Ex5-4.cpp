#include <iostream>
using namespace std;

void Ex5p4()
{
	char input[1000]{};

	cout << "Input a string to be stored no larger than 1000 characters long:" << endl;
	cin.getline(input, sizeof(input));

	unsigned int length{};
	for (size_t i{}; i < sizeof(input); i++)
	{
		if (input[i] == '\0')
		{
			length = i-1; // Lengths of strings do not typically include the null character.
			break;
		};
	};

	for (size_t i{length}; i <= length; --i)
	{
		cout << input[i];
	};
};
