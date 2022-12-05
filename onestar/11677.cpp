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
    int h[2], m[2], ht, mt, ans;
    while (cin >> h[0] >> m[0] >> h[1] >> m[1]) {
        if (h[0] == 0 && m[0] == 0 &&
            h[1] == 0 && m[1] == 0) break;
        if (h[0] < h[1]) {
            mt = 60 - m[0] + m[1]; h[0]++;
            ht = h[1] - h[0];
            ans = ht * 60 + mt;
        }
        else if (h[0] == h[1]) {
            if (m[0] <= m[1]) {
                ans = m[1] - m[0];
            }
            else {
                ht = 23;
                mt = 60 - m[0] + m[1];
                ans = ht * 60 + mt;
            }
        }
        else {
            mt = 60 - m[0] + m[1]; h[0]++;
            ht = h[1] + (24 - h[0]);
            ans = ht * 60 + mt;
        }
        cout << ans << '\n';
    }
    return 0;
}