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
    int t, d, q, p, repeat, index;
    vector<string> m;
    vector<int> l, h;
    bool first = true;
    cin >> t;
    while (t--) {
        if (first) first = false;
        else cout << '\n';
        m.clear();
        l.clear();
        h.clear();
        cin >> d;
        string M;
        int L, H;
        for (int i = 0; i < d; i++) {
            cin >> M >> L >> H;
            m.push_back(M);
            l.push_back(L);
            h.push_back(H);
        }
        cin >> q;
        while (q--) {
            cin >> p;
            repeat = 0;
            for (int i = 0; i < d; i++) {
                if (p >= l[i] && p <= h[i]) {
                    repeat++;
                    index = i;
                }
            }
            if (repeat == 1) cout << m[index] << '\n';
            else cout << "UNDETERMINED\n";
        }
    }
    return 0;
}