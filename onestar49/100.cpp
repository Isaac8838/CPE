#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int GetCycleLen(int n) {
    int count = 1;
    if (n == 1) return count;
    while (n != 1) {
        if (n % 2 != 0) n = 3 * n + 1;
        else n /= 2;
        count++;
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
    int i, j, ans;
    while (cin >> i >> j) {
        ans = 0;
        for (int k = min(i, j); k <= max(j, i); k++) {
            ans = max(ans, GetCycleLen(k));
        }
        cout << i << ' ' << j << ' ' << ans << '\n';
    }
    return 0;
}