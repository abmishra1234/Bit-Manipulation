using namespace std;

#include <iostream>

//#define FORREF
#ifndef FORREF

struct CountSetBits {
	/*
		divide and modulus
	*/
	int soln_01(int n)
	{
		int count = 0;

		while (n > 0)
		{
			if (n % 2 != 0)
				++count;
			n /= 2;
		}

		return count;
	}

	/*
		right shift and modulus
	*/
	int soln_02(int n)
	{
		int count = 0;

		while (n > 0)
		{
			if (n % 2 != 0)
				++count;
			n >>= 1;
		}

		return count;
	}

/*
	right shift and & bitwise operator
*/
	int soln_03(int n)
	{
		int count = 0;

		while (n > 0)
		{
			if (n & 1)
				++count;
			n >>= 1;
		}

		return count;
	}

	/*
		right shift and & bitwise operator
	*/
	int soln_04(int n)
	{
		int count = 0;

		while (n > 0)
		{
			n &= (n - 1);
			++count;
		}

		return count;
	}

	int soln_05(int n)
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

	CountSetBits csb;
	int number = 125;
	cout << csb.soln_01(number) << endl;
	cout << csb.soln_02(number) << endl;
	cout << csb.soln_03(number) << endl;
	cout << csb.soln_04(number) << endl;
	cout << csb.soln_05(number) << endl;




	return 0;
}

#endif // !FORREF


