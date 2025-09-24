#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i{}; i < n; ++i) {
        for (int j{}; j < n; ++j) {
            cout << (i ^ j) << ' ';
        }
        cout << '\n';
    }
}
