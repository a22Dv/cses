#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t n{};
    cin >> n;
    uint64_t sum{n * (n + 1) / 2};
    uint64_t term{};
    while (cin >> term) {
        sum -= term;
    }
    cout << sum << endl;
}
