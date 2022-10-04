#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int n = 10001;
    int count = 0;
    int i = 1;
    while (count < n) {
        i++;
        if (isPrime(i)) {
            count++;
        }
    }
    cout << i << endl;
    return 0;
}
