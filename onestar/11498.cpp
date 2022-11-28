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
    int k, n, m, x, y;
    while (cin >> k && k) {
        cin >> n >> m;
        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            if (x == n || y == m) cout << "divisa\n";
            else if (x < n && y > m) cout << "NO\n";
            else if (x > n && y > m) cout << "NE\n";
            else if (x > n && y < m) cout << "SE\n";
            else if (x < n && y < m) cout << "SO\n";
        }
    }
    return 0;
}