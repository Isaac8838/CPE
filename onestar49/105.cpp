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
    int mostLeft = 10000, mostRight = 0;
    int l, h, r;
    vector<int> bulidings(10000, 0);
    while (cin >> l >> h >> r) {
        mostLeft = min(mostLeft, l);
        mostRight = max(mostRight, r);
        for (int i = l; i < r; i++) {
            bulidings[i] = max(bulidings[i], h);
        }
    }
    int y = -1;
    bool first = true;
    for (int i = mostLeft; i <= mostRight; i++) {
        if (bulidings[i] != y) {
            if (first) {
                first = false;
                cout << i << ' ' << bulidings[i];
            }
            else {
                cout << ' ' << i << ' ' << bulidings[i];
            }
            y = bulidings[i];
        }
    }
    cout << '\n';
    return 0;
}