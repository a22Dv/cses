#include <bits/stdc++.h>

using namespace std;

constexpr array<int, 8> xs{-1, 1, -2, 2, -2, 2, -1, 1};
constexpr array<int, 8> ys{2, 2, 1, 1, -1, -1, -2, -2};

void search(vector<int>& board, int x, int y, int n, int pval) {
    cout << x << ' ' << y << ' ' << pval << '\n';
    if (x < 0 || y < 0 || x >= n || y >= n) {
        return;
    }
    board[y * n + x] = ++pval;
    for (int i{}; i < 8; ++i) {
        int xc{x + xs[i]}, yc{y + ys[i]};
        search(board, xc, yc, n, pval);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> board((n * n));
    board[0] = 0;
    search(board, 0, 0, n, -1);
    for (int y{}; y < n; ++y) {
        for (int x{}; x < n; ++x) {
            cout << board[y * n + x] << ' ';
        }
        cout << '\n';
    }
}
