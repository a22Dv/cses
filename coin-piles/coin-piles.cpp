#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t t{};
    cin >> t;
    while (t--) {
        int64_t a{}, b{};
        cin >> a >> b;
        int64_t x{(2 * b - a) / 3}, y{(2 * a - b) / 3};
        if (x >= 0 && y >= 0 && (a + b) % 3 == 0)  {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}
