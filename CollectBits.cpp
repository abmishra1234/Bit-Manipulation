using namespace std;

#include <iostream>
#include <stack>
#include <vector>

#define FORREF
#ifndef FORREF

/*
	I personally favor struct because it will avoid the lots structure of code
	which is required in class and accessibilty.
*/

struct CollectBits {
	/*
		Bit shifting & modulus approach
	*/

	stack<int> output;

	void soln_01(int n)
	{
		int count = 0;
		while (n > 0)
		{
			int bit = n % 2;
			output.push(bit);
			n >>= 1;
		}
		
		while (!output.empty())
		{
			cout << output.top() << " ";
			output.pop();
		}
		cout << endl;
	}
};

int main() {

	CollectBits cb;
	cb.soln_01(125);
	cb.soln_01(129);



	return 0;
}

#endif // !FORREF


