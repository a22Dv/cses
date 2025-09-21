#include <bits/stdc++.h>

using namespace std;

void search(
    vector<int64_t>& o,
    size_t idx,
    int64_t v1s,
    int64_t v2s,
    int64_t& mns
) {
    if (idx == o.size()) {
        mns = min(mns, abs(v1s - v2s));
        return;
    }
    
    int64_t val{o[idx]};
    search(o, idx + 1, v1s + val, v2s, mns);
    search(o, idx + 1, v1s, v2s + val, mns);
}

int main() {
    int w{};
    cin >> w;
    vector<int64_t> vecw(w);
    while (cin >> vecw[--w]) {};
    int64_t mns{INT64_MAX};
    search(vecw, 0, 0, 0, mns);
    cout << mns << endl;
}
