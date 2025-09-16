#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t n{};
    cin >> n;
    while (n--) {
        uint64_t x{}, y{}, mx{}, sq{};
        cin >> y >> x;
        mx = max(x, y);
        sq = (mx * mx) - (mx - 1);
        if (y == mx) {
            cout << (mx & 1 ? sq - (mx - x) : sq + (mx - x)) << '\n';
        } else {
            cout << (mx & 1 ? sq + (mx - y) : sq - (mx - y)) << '\n';
        }
    }
}
