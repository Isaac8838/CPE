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
    vector<int> sum(1001, 0);
    sum[1] = 1;
    for (int i = 2; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                sum[i] += j;
            }
        }
    }
    int s, c = 1;
    while (cin >> s) {
        if (s == 0) break;
        int i, ans = -1;
        for (i = 1; i <= 1000; i++) {
            if (sum[i] == s) {
                ans = max(ans, i);
            }
        }
        cout << "Case " << c++ << ": ";
        cout << ans << '\n';
    }
    return 0;
}