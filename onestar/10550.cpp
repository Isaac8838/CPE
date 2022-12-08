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
    int first, comb[3], degree;
    while (cin >> first >> comb[0] >> comb[1] >> comb[2]) {
        if (!(first || comb[0] || comb[1] || comb[2])) break;
        degree = 1080;
        degree += (40 + first - comb[0]) % 40 * 9;
        degree += (40 + comb[1] - comb[0]) % 40 * 9;
        degree += (40 + comb[1] - comb[2]) % 40 * 9;
        cout << degree << '\n';
    }
    return 0;
}