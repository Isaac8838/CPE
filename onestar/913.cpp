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
    ll n, row, last, sum;
    while (cin >> n) {
        row = (n + 1) / 2;
        last = (row * row) * 2 - 1;
        sum = last * 3 - 6;
        cout << sum << '\n';
    }
    return 0;
}