#include <bits/stdc++.h>

using namespace std;

constexpr array<int, 8> xs{-1, 1, 2, 2, -2, -2, -1, 1};
constexpr array<int, 8> ys{2, 2, -1, 1, -1, 1, -2, -2};

void pushToQueue(
    vector<int>& board,
    queue<int>& queue, 
    const int n, 
    const int x, 
    const int y,
    const int st
) {
    for (int i{}; i < 8; ++i) {
        int nx{x + xs[i]}, ny{y + ys[i]};
        int nIdx{ny * n + nx};
        if (nx < 0 || nx >= n || ny < 0 || ny >= n || board[nIdx] != -1) continue;
        queue.push(nIdx);
        board[nIdx] = st;
    }
}

void search(
    vector<int>& board, 
    queue<int>& queue,
    const int n,
    const int x,
    const int y
) {
    // Push initial neighbors.
    int steps{1};
    pushToQueue(board, queue, n, x, y, steps);
    int cround{static_cast<int>(queue.size())};
    while (!queue.empty()) {
        for (int i{}; i < cround; ++i) {
            int f{queue.front()};
            pushToQueue(board, queue, n, f % n, f / n, steps + 1);
            queue.pop();
        }
        cround = static_cast<int>(queue.size());
        ++steps;
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n{};
    cin >> n;
    vector<int> board((n * n));
    fill(board.begin(), board.end(), -1);
    board[0] = 0;
    queue<int> queue{};
    search(board, queue, n, 0, 0);
    for (int i{}; i < n; ++i) {
        for (int j{}; j < n; ++j) {
            cout << board[i * n + j] << ' ';
        }
        cout << '\n';
    }
}
