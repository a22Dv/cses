#include <bits/stdc++.h>

using namespace std;
int main() {
    int n{};
    cin >> n;
    int iters{static_cast<int>(pow(2, n))};
    for (int k{}; k < iters; ++k) {
        string s{};
        int gcode{k ^ (k >> 1)};
        for (int j{}; j < n; ++j) {
            s.append(1, (gcode >> j) & 1 ? '1' : '0');
        }
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
    vector<int> v{};
}
