using namespace std;
#include <iostream>

//#define FORREF
#ifndef FORREF

struct FlipBits {
	
	int Count(int a, int b, int c)
	{
		int res = 0;

		for (int i = 0; i < 32; ++i) {
			int bitc = (c >> i) & 1;
			int bita = (a >> i) & 1;
			int bitb = (b >> i) & 1;

			if ((bita | bitb) == bitc) {
				continue;
			}

			if (bitc == 0 && (bita == bitb))
				res += 2;
			else
				res += 1;
		}
		return res;
	}
};

int main() {
	FlipBits fb;
	cout << fb.Count(2, 6, 5);

	return 0;
}

#endif // !FORREF


