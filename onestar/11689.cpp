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
    int n;
    int e, f, c;
    int empty, drink;
    cin >> n;
    while (n--) {
        cin >> e >> f >> c;
        empty = e + f;
        drink = 0;
        while (empty - c >= 0) {
            drink += empty / c;
            empty = (empty / c) + (empty % c);
        }
        cout << drink << '\n';
    }
    return 0;
}