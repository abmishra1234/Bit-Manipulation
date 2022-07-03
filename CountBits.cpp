using namespace std;

#include <iostream>
#include <vector>

#define FORREF
#ifndef FORREF

/*
	I personally favor struct because it will avoid the lots structure of code
	which is required in class and accessibilty.
*/

struct CountBits {
	/*
		Bit shifting approach
	*/
	int soln_01(int n)
	{
		int count = 0;
		while (n > 0)
		{
			++count;
			n >>= 1;
		}
		return count;
	}
};

int main() {

	CountBits cb;
	cout << cb.soln_01(125) << endl;
	cout << cb.soln_01(129) << endl;



	return 0;
}

#endif // !FORREF


