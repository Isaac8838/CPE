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
    int t, n, sum;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum < n) cout << "deficient\n";
        else if (sum == n) cout << "perfect\n";
        else cout << "abundant\n";
    }
    return 0;
}