#include <bits/stdc++.h>

using namespace std;
int main() {
    int64_t n{};
    cin >> n;

    /* Check sum if even, there is ALWAYS a solution for even sums.
     * Greedy approach. If current + x < target, add to a else b.
     */
    if ((n * (1 + n) / 2) & 1) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
    int64_t t{n * (1 + n) / 4};
    vector<int64_t> a{};
    vector<int64_t> b{};
    int64_t c{};
    for (int64_t i{n}; i > 0; --i) {
        if (c + i <= t) {
            a.push_back(i);
            c += i;
            continue;
        }
        b.push_back(i);
    }
    cout << a.size() << endl;
    for (const auto& e : a) {
        cout << e << ' ';
    }
    cout << endl << b.size() << endl;
    for (const auto& e : b) {
        cout << e << ' ';
    }
}
