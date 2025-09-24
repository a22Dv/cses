#include <bits/stdc++.h>

using namespace std;

int main() {
    int t{};
    cin >> t;
    while (t--) {
        int n{}, a{}, b{};
        cin >> n >> a >> b;

        /*
         * Impossible when number of 
         * wins is more than the number
         * of turns, and when one
         * player has 0, as this would
         * imply that all of the cards of
         * the other is larger than the
         * first, which is not allowed
         * as both players are given the same
         * cards.
         */
        if (a + b > n || !!a ^ !!b) {
            cout << "NO\n";
            continue;
        }

        /* 
         * Construct A's sequence to be as simple
         * as possible. Then for b, we tack on
         * the draws first, then use a cyclic shift 
         * on i, then normalize to d+1, to get the
         * final value.
         */
        cout << "YES\n";
        for (int i{1}; i <= n; ++i) cout << i << ' ';
        cout << '\n';
        int d{n - a - b};
        for (int i{1}; i <= d; ++i) cout << i << ' ';
        for (int i{}; i < n - d; ++i) cout << 1 + d + (i + a) % (n - d) << ' ';
        cout << '\n';
    }
}

  
