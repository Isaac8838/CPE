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
    int t, n, temp, i;
    vector<int> seq;
    bool isZero;
    cin >> t;
    while (t--) {
        cin >> n;
        isZero = true;
        seq.assign(n, 0);
        for (i = 0; i < n; i++) {
            cin >> seq[i];
        }
        for (int j  = 0; j < 1000; j++) {
            for (i = 0, temp = seq[0]; i < n - 1; i++) {
                seq[i] = abs(seq[i] - seq[i + 1]);
            }
            seq[i] = abs(seq[i] - temp);
        }
        for (auto num : seq) {
            if (num != 0) {
                isZero = false;
                break;
            }
        }
        if (isZero) cout << "ZERO\n";
        else cout << "LOOP\n";
    }
    return 0;
}