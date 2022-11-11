#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

bool Square(vector<vector<char>> &matrix, int lr, int lc, int rr, int rc, char alphabet) {
    int m = matrix.size(), n = matrix[0].size();
    if (lr < 0 || lc < 0) return false;
    if (rr >= m || lr >= n) return false;
    for (int i = lr; i <= rr; i++) {
        for (int j = lc; j <= rc; j++) {
            if (matrix[i][j] != alphabet) return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int t;
    int m, n, q;
    int r, c;
    int largestSquare;
    vector<vector<char>> matrix;
    cin >> t;
    while (t--) {
        cin >> m >> n >> q;
        matrix.clear();
        matrix = vector<vector<char>>(m, vector<char>(n, '.'));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        cout << m << ' ' << n << ' ' << q << '\n';
        for (int i = 0; i < q; i++) {
            largestSquare = 1;
            cin >> r >> c;
            int scale = 1;
            while (Square(matrix, (r - scale), (c - scale), (r + scale), (c + scale), matrix[r][c])) {
                largestSquare += 2;
                scale++;
            }
            cout << largestSquare << '\n';
        }
    }
    return 0;
}