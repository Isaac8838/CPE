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
    ll x, m, n, d;
    bool first;
    while (cin >> x && x != 0) {
        first = true;
        for (d = 9; d >= 0; d--) {
            if ((x - d) % 9 == 0) {
                m = (x - d) / 9;
                n = x + m;
                if (first) {
                    cout << n;
                    first = false;
                }
                else cout << ' ' << n;
            }
        }
        cout << '\n';
    }
    return 0;
}