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
    int t, len[4];
    cin >> t;
    while (t--) {
        cin >> len[0] >> len[1] >> len[2] >> len[3];
        if (len[0] == len[1] && len[1] == len[2] && len[2] == len[3]) cout << "square\n";
        else if (len[0] == len[1] && len[2] == len[3]) cout << "rectangle\n";
        else if (len[0] == len[2] && len[1] == len[3]) cout << "rectangle\n";
        else if (len[0] == len[3] && len[1] == len[2]) cout << "rectangle\n";
        else {
            int m = max({len[0], len[1], len[2], len[3]});
            int sum = 0;
            for (int i = 0; i < 4; i++) {
                sum += len[i];
            }
            sum -= m;
            if (sum > m) cout << "quadrangle\n";
            else cout << "banana\n";
        }
    }
    return 0;
}