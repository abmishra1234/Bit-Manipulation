using namespace std;

#include <iostream>

//#define FORREF
#ifndef FORREF

/*
	I personally favor struct because it will avoid the lots structure of code
	which is required in class and accessibilty.
*/

struct BitwiseAnd {
	int oper(int a, int b)
	{
		return a & b;
	}
};

/*
	2 & 4 = 010 & 100 = 0
	5 & 5 = 101 & 101 = 101 = 5
	12 & 10 = 1100 & 1010 = 1000 = 8
*/

int main() {

	BitwiseAnd ba;
	cout << ba.oper(2, 4) << endl;
	cout << ba.oper(5, 5) << endl;
	cout << ba.oper(12, 10) << endl;
	cout << ba.oper(2, 10) << endl;

	int x = 12,  y = 10,  z = 32;

	cout << ((x & y) & z) << endl;


	return 0;
}

#endif // !FORREF


