using namespace std;
#include <iostream>

//#define FORREF
#ifndef FORREF

struct SwapNumbers {
	void oper(int &a, int &b)
	{
		a = a ^ b;
		b = b ^ a;
		a = a ^ b;
	}
};

int main() {
	SwapNumbers sn;
	int a = 12, b = 25;
	cout << "before swap" << "a=" << a << ",b=" << b << endl;
	sn.oper(a, b);
	cout << "after swap" << "a=" << a << ",b=" << b << endl;

	return 0;
}

#endif // !FORREF


