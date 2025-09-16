#include <bits/stdc++.h>
#define SOURCE 1
#define AUXILIARY 2
#define DESTINATION 3

using namespace std;

void hanoi(int source, int auxiliary, int destination, int n, vector<pair<uint8_t, uint8_t>>& out) {
    if (n == 1) {
        out.push_back(pair<uint8_t, uint8_t>{source, destination});
        return;
    }
    hanoi(source, destination, auxiliary, n - 1, out);
    out.push_back(pair<uint8_t, uint8_t>{source, destination});
    hanoi(auxiliary, source, destination, n - 1, out);
}

int main() {
    int n{};
    cin >> n;
    vector<pair<uint8_t, uint8_t>> vec{};
    hanoi(SOURCE, AUXILIARY, DESTINATION, n, vec);
    cout << vec.size() << endl;
    for (const auto& p : vec) {
        cout << static_cast<int>(p.first) << ' ' << static_cast<int>(p.second) << '\n';
    }
}
