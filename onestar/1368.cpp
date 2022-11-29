#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int t, m, n, err;
    vector<vector<int>> acgt;
    string s, s1 = {'A', 'C', 'G', 'T'};
    cin >> t;
    while (t--) {
        cin >> m >> n;
        acgt = vector<vector<int>>(4, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            cin >> s;
            for (int j = 0; j < n; j++) {
                for (int k = 0; k < 4; k++) {
                    if (s[j] == s1[k]) {
                        acgt[k][j]++;
                        break;
                    }
                }
            }
        }
        err = 0;
        int temp;
        for (int i = 0; i < n; i++) {
            temp = max({acgt[0][i], acgt[1][i], acgt[2][i], acgt[3][i]});
            err += (m - temp);
            for (int j = 0; j < 4; j++) {
                if (temp == acgt[j][i]) {
                    cout << s1[j];
                    break;
                }
            }
        }
        cout << '\n' << err << '\n';
    }
    return 0;
}