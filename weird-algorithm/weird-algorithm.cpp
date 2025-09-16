#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t n{};
    cin >> n;
    cout << n << ' ';
    while (n != 1) {
        n & 1 ? (n = 3 * n + 1) : n /= 2;
        cout << n << ' ';
    }
}
