#include <bits/stdc++.h>

using namespace std;

void search(const string in, const string out, int depth, vector<string>& vec) {
    if (depth == 1) {
        vec.push_back(out + in[0]);
        return;
    }
    for (int i{}; i < in.length(); ++i) {
        string s{in};
        char selchar{s[i]};
        s.erase(i, 1);
        search(s, out + selchar, depth - 1, vec);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string in{};
    getline(cin, in);
    vector<string> svec{};
    string out{};
    search(in, out, in.length(), svec);
    set<string> st{};
    for (auto s : svec) {st.insert(s);}
    cout << st.size() << endl;
    for (auto& s : st) {cout << s << '\n';}
}

