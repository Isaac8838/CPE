#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int digitSum(int n) {
    int sum = n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int t, n, sum;
    bool found;
    cin >> t;
    while (t--) {
        cin >> n;
        found = false;
        int i;
        for (i = 0; i < n; i++) {
            sum = digitSum(i);
            if (sum == n) {
                found = true;
                break;
            }
        }
        if (found) cout << i << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}