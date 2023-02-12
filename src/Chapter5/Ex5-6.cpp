#include <iostream>
#include <vector>
using namespace std;

void Ex5p6()
{
   unsigned int upperbound{};

   cout << "Input an upper bound: ";
   cin >> upperbound;
   cout << endl;

   vector<int> numbers{};
   for (size_t i{1}; i <= upperbound; i++) {numbers.push_back(i);}

   for (size_t i{}; i < upperbound; i++)
   {
	   if ((numbers.at(i) % 7 != 0) && (numbers.at(i) % 13 != 0))
	   {
		   cout << numbers.at(i);
		   if ( i != (upperbound - 1) )
		   {
			   cout << ", ";
		   }
		   else
		   {
			   cout << "." << endl;
		   }
	   }

   }
};
