#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int FindMines(vector<vector<char>> &minesweeper, int i, int j) {
    int m = minesweeper.size(), n = minesweeper[0].size();
    int count = 0;
    for (int k = i - 1; k <= i + 1; k++) {
        for (int u = j - 1; u <= j + 1; u++) {
            if (k < 0 || k >= m) continue;
            if (u < 0 || u >= n) continue;
            if (minesweeper[k][u] == '*') count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int m, n, t = 0;
    bool first = true;
    vector<vector<char>> minesweeper;
    while (cin >> m >> n) {
        if (m == 0 && n == 0) break;
        t++;
        if (first) first = false;
        else cout << '\n';
        minesweeper.clear();
        minesweeper = vector<vector<char>>(m, vector<char>(n, '.'));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> minesweeper[i][j];
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (minesweeper[i][j] != '*') {
                    minesweeper[i][j] = FindMines(minesweeper, i, j) + '0';
                }
            }
        }
        cout << "Field #" << t << ":\n";
        for (auto i : minesweeper) {
            for (auto u : i) {
                cout << u;
            }
            cout << '\n';
        }
    }
    return 0;
}