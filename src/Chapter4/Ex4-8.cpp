#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <array>

using namespace std;

string makePlural(string str)
{
	string plural_str{};
	if (str.find("y") != string::npos)
	{
		plural_str = str.replace(str.length()-1, 1, "ies") ;
	}
	else
	{
		plural_str = str.replace(str.length(), 1, "s") ;
	}
	return plural_str ;
}

void Ex4p8() {

	float money{};

	array<float, 4> coins {0.25, 0.1, 0.05, 0.01};
	array<string, 4> coin_names {"quarter", "dime", "nickel", "penny"};
	int score[4] {0,0,0,0};

	cout << "Please input a dollar amount between $0 and $10: ";
	cin >> money ;
	cout << endl ;

//	float new_val{money};

	cout << "$" << money << " may be composed of: " << endl;

	for (size_t coin{}; coin < coins.size(); coin++)
	{
		score[coin] += floor(money/coins[coin]);
		float remainder{money/coins[coin] - floor(money/coins[coin])};
		money = remainder * coins[coin];
		cout << "    " << score[coin] << " " << makePlural(coin_names[coin]);
	}
	cout << endl;
}
