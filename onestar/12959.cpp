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
    int j, r, winner, m;
    vector<int> sum;
    while (cin >> j >> r) {
        if (j == 0 && r == 0) break;
        sum.clear();
        sum = vector<int>(j, 0);
        int num;
        for (int i = 0; i < r; i++) {
            for (int k = 0; k < j; k++) {
                cin >> num;
                sum[k] += num;
            }
        }
        winner = -1;
        m = -1;
        for (int i = 0; i < j; i++) {
            if (m <= sum[i]) {
                winner = i + 1;
                m = sum[i];
            }
        }
        cout << winner << '\n';
    }
    return 0;
}