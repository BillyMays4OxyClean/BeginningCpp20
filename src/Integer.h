#include <iostream>
#ifndef INTEGER_H_
#define INTEGER_H_

class Integer
{

private:
	int value;

public:
	int GetValue() {return value;}
	void SetValue(int new_value) {value = new_value;}
	inline void OutputValue() {std::cout << value << std::endl;}
	Integer(int initialized_value) {value = initialized_value;}
};

#endif
