#include <bits/stdc++.h>

using namespace std;

int main() {
    char cCh{};
    uint64_t maxC{}, cC{};
    char ch{};
    while (cin >> ch) {
        if (ch == cCh) {
            cC += 1;
        } else {
            maxC = max(maxC, cC);
            cCh = ch;
            cC = 1;
        }
    }
    maxC = max(maxC, cC);
    cout << maxC;
}
