#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

void Ex5p2()
{
	cout << "Begin entering integers to be summed: ";

	vector<int> values;
	int input{};

	cin >> input;
	cout << endl;

	values.push_back(input);

	char answer {};
	cout << "Are you done entering numbers?[y/n]: ";
	cin >> answer;

	while ( tolower(answer) != 'y' )
	{
		cout << "Enter a number to add to the list: ";
		int input{};
		cin >> input;
		cout << endl;

		values.push_back(input);

		cout << "Are you done entering numbers?[y/n]: ";
		cin >> answer;

	}

	cout << "Values are: ";
	int sum{};
	for (size_t i{}; i < values.size(); i++)
	{
		cout << values.at(i) << ", ";
		sum += values.at(i);
	}
	cout << "." << endl;

	cout << "The sum is " << sum << endl;
	cout << "Goodbye!" << endl;
}
