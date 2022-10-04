#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;
            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                cout << a * b * c;
                return 0;
            }
        }
    }
    return 0;
}
