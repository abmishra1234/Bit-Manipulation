
#include <iostream>
using namespace std;

//#define FORREF
#ifndef FORREF

int bitsLength(int n) {
    int bitsCounter = 0;
    
    do {
        ++bitsCounter;
    } while (n >>= 1);
    
     return bitsCounter;
}

int main() {
    cout << bitsLength(8) << "\n";
    cout << bitsLength(2) << "\n";
    cout << bitsLength(7);
    return 0;
}

#endif // !FORREF


