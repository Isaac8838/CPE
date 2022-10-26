#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int v, t;
    while (cin >> v >> t) {
        t *= 2;
        cout << v * t << '\n';
    }
    return 0;
}