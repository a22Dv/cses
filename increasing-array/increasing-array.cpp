#include <bits/stdc++.h>

using namespace std;

int main() {
    uint64_t n{};
    cin >> n;
    
    uint64_t pt{}, t{}, mvs{};
    while (cin >> t) {
        if (t < pt) mvs += pt - t;
        else pt = t;
    }
    cout << mvs;
}
