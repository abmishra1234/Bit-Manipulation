using namespace std;

#include <iostream>

#define FORREF
#ifndef FORREF

struct IsEvenOrOdd {

	int soln_01(int n)
	{
		int table[256];
		table[0] = 0;

		for (int i = 1; i < 256; i++) {
			table[i] = (i & 1) + table[i >> 1]; // i >> 1 equals to i/2
		}

		int res = 0;
		for (int i = 0; i < 4; i++) {
			res += table[n & 0xff];
			n >>= 8;
		}

		return res;
	}


};




int main() {

	IsEvenOrOdd eo;



	return 0;
}

#endif // !FORREF


