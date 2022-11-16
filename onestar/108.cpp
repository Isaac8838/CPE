#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int n;
    vector<vector<int>> matrix;
    while (cin >> n) {
        matrix.clear();
        matrix = vector<vector<int>>(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> matrix[i][j];
                matrix[i][j] += matrix[i][j - 1];
            }
        }
        int total = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                total = 0;
                for (int k = 1; k <= n; k++) {
                    total += matrix[k][j] - matrix[k][i];
                    sum = max(total, sum);
                    if (total < 0) total = 0;
                }
            }
        }
        cout << sum << '\n';
    }
    return 0;
}