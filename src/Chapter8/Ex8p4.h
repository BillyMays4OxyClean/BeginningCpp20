/*
 * Ex8p4.h
 *
 *  Created on: Dec 6, 2022
 *      Author: Luke
 */

#ifndef SRC_EX8P4_H_
#define SRC_EX8P4_H_

#include <iostream>
using namespace std;

int plus(const int& a, const int& b)
{
	const int c{a + b};
	return c;
}

double plus(const double& a, const double& b)
{
	const double c{a + b};
	return c;
}

string plus(const string& a, const string& b)
{
	string c{a + b};
	return c;
}

#endif /* SRC_EX8P4_H_ */
