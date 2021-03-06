using namespace std;
#include <iostream>
#include <vector>

//#define FORREF
#ifndef FORREF
/*
	Example-01:
	Input: x = 1, y = 8
	Output: 2
	Explanation:
	1   (0 0 0 1)
	8   (1 0 0 0)
		 ↑     ↑

*/

struct HD {

	void hammingDistance(int a, int b) {
		int xorVal = a ^ b;
		int distance = 0;

		while (xorVal ^ 0) {
			if (xorVal % 2 == 1) {
				distance += 1;
			}
			xorVal >>= 1;
		}
		cout << "Hamming Distance between two integers is " << distance << endl;
	}
	
	void hammingDistanceNew(int a, int b) {
		int xorVal = a ^ b;
		int distance = 0;

		while (xorVal != 0) {
			++distance;
			xorVal &= (xorVal - 1);
		}
		cout << "Hamming Distance between two integers is " << distance << endl;
	}	

};

int main() {
	HD soln;
	soln.hammingDistance(1, 8);
	soln.hammingDistanceNew(1, 8);

	return 0;
}

#endif // !FORREF






