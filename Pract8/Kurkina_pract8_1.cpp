#include <iostream>

using namespace std;

long long power(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) {
            res *= a;
        }
        a *= a;
        n >>= 1;
    }
    return res;
}

int main() {
    long long a, n;
    cin >> a >> n;
    
    cout << power(a, n) << endl;
    
    return 0;
}