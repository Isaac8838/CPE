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
    ll low, high;
    while (cin >> low >> high) {
        if (low == 0 && high == 0) break;
        cout << (high / 5) - (low / 5) + 1 << '\n';
    }
    return 0;
}