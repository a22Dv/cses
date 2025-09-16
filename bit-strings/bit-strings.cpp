#include <bits/stdc++.h>

using namespace std;
int main() {
    int64_t n{};
    cin >> n;

    int64_t o{1};

    // ab mod c = a mod c * b mod c
    for (int64_t i{}; i < n; ++i) {
        o = (o * 2) % ((int64_t)1e9 + 7);
    }
    cout << o << endl;
}
