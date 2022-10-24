#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    ll s, d;
    while (cin >> s >> d) {
        ll checkOut = s;
        while (checkOut < d) {
            s += 1;
            checkOut += s;
        }
        cout << s << '\n';
    }
    return 0;
}