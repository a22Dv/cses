#include <bits/stdc++.h>

using namespace std;

void search(
        bitset<64> board, 
        int row, 
        bitset<8> colMask,
        bitset<15> d1Mask, 
        bitset<15> d2Mask,
        int& count
) {
    if (row == 8) {
        count++;
        return;
    }
    for (int i{}; i < 8; ++i) {
        int idx{row * 8 + i};
        int d1Idx{row + i};
        int d2Idx{(row - i) + 7};
        if (colMask[i] | d1Mask[d1Idx] | d2Mask[d2Idx] | !board[idx]) {
            continue;
        }
        colMask[i] = 1;
        d1Mask[d1Idx] = 1;
        d2Mask[d2Idx] = 1;

        search(board, row + 1, colMask, d1Mask, d2Mask, count);

        d2Mask[d2Idx] = 0;
        d1Mask[d1Idx] = 0;
        colMask[i] = 0;
    }
}

int main() {
    bitset<64> board{};
    for (int i{}; i < 64; ++i) {
        char t{};
        cin >> t;
        board[i] = t == '.';
    }
    int count{};
    search(board, 0, bitset<8>{}, bitset<15>{}, bitset<15>{}, count);
    cout << count << endl;
}
