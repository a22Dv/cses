#include <bits/stdc++.h>

using namespace std;

int main() {
    /*
     * A trailing zero pops up
     * for every factor that comes up
     * to 10. Which is 5 * 2. Limiting
     * factor is 5, less 5s than 2s.
     * Some terms contribute more than 1
     * 5 (e.g. 25, 125) = 5 * 5, 5 * 5 * 5.
     * Hence we repeat until we can't anymore.
     */
    int64_t n{};
    cin >> n;

    int64_t count{};
    int64_t div{5};
    while (div <= n) {
        count += n / div;
        div *= 5;
    }
    cout << count;
}
