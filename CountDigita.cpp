using namespace std;

#include <iostream>
#include <vector>

#define FORREF
#ifndef FORREF

/*
	I personally favor struct because it will avoid the lots structure of code 
	which is required in class and accessibilty.
*/
struct CountDigits {
	int solution(int n, int base)
	{
		int count = 0;
		while (n > 0)
		{
			++count;
			n /= base;
		}
	
		return count;
	}
};



int main() {

	CountDigits cd;
	int answer = cd.solution(12345, 10);
	cout << "The output should be 5 returned into answer = " << answer << "\n";

	return 0;
}

#endif // !FORREF


