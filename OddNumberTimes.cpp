using namespace std;
#include <iostream>
#include <vector>

//#define FORREF
#ifndef FORREF
/*
	Input: {4, 3, 3, 4, 4, 4, 5, 3, 5}
	Output: 3
*/

struct OddNumberTimes {
	int soln(vector<int> arr)
	{
		int output = 0;
		for (size_t i = 0; i < arr.size(); ++i)
		{
			output ^= arr[i];
		}
		return output;
	}
};

int main() {
	OddNumberTimes ot;
	vector<int> arr{ 4, 3, 3, 4, 4, 4, 5, 3, 5 };
	cout << ot.soln(arr) << endl;

	return 0;
}

#endif // !FORREF


