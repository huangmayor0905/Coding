#include <algorithm>
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << __gcd(a, b) << "\n";
    }
    return 0;
}
