#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t n{};
    cin >> n;

    for (uint64_t i{1}; i <= n; ++i) {
        uint64_t sq{i * i};
        uint64_t pm{sq * (sq - 1) / 2};
        uint64_t tiled{((i - 2) * (i - 1)) * 4};
        cout << (pm - tiled) << '\n';
    }
}
