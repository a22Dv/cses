#include <bits/stdc++.h>

using namespace std;

int main() {
    string s{};
    getline(cin, s);
    size_t l{s.length()};
    bool even{!static_cast<bool>(l & 1)};
    unordered_map<char, int> map{};
    for (char c : s) {
        if (map.find(c) == map.end()) {
            map[c] = 1;
        } else {
            map[c]++;
        }
    }
    if (even) {
        string sp{};
        for (const auto& p : map) {
            if (p.second & 1) {
                cout << "NO SOLUTION\n";
                return 0;
            } else {
                sp.append(p.second / 2, p.first);
            }
        }
        string sp2{sp};
        reverse(sp2.begin(), sp2.end());
        sp.append(sp2);
        cout << sp << endl;
    } else {
        char ch{'\0'};
        int chC{0};
        string sp{};
        for (const auto& p : map) {
            if (p.second & 1) {
                if (chC == 0) {
                    ch = p.first;
                    chC = p.second;
                    continue;
                }
                cout << "NO SOLUTION\n";
                return 0;
            } else {
                sp.append(p.second / 2, p.first);
            }

        }
        string sp2{sp};
        reverse(sp2.begin(), sp2.end());
        sp.append(chC, ch);
        sp.append(sp2);
        cout << sp << endl;
        return 0; 
    }
}
