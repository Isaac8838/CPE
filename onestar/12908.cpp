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
    ll s, sum = 0, i;
    while (cin >> s) {
        if (s == 0) break;
        sum = 0;
        i = 0;
        while (sum <= s) {
            sum += ++i;
        }
        cout << sum - s << ' ' << i << '\n';
    }
    return 0;
}