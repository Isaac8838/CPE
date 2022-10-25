#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ll t, s, d;
    cin >> t;
    while (t--) {
        cin >> s >> d;
        if (d > s) cout << "impossible\n";
        else {
            ll a, b, b1;
            a = (s + d) / 2;
            b = s - a;
            b1 = a - d;
            if (b != b1) cout << "impossible\n";
            else cout << max(a, b) << ' ' << min(a, b) << '\n';
        }
    }
    return 0;
}