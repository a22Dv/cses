#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t n{}, sum{};
    cin >> n;
    sum = (n * (n + 1)) / 2;
    if (n != 1 && n < 4) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    for (uint64_t i{2}; i <= n; i += 2) cout << i << ' ';
    for (uint64_t i{1}; i <= n; i += 2) cout << i << ' ';
}
