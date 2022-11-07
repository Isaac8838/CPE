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
    int t, n, p;
    vector<int> hartals;
    cin >> t;
    while (t--) {
        cin >> n >> p;
        hartals.clear();
        hartals = vector<int>(p, 0);
        for (int i = 0; i < p; i++) {
            cin >> hartals[i];
        }
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 7 != 0 && (i - 6) % 7 != 0) {
                for (auto j : hartals) {
                    if (i % j == 0) {
                        count++;
                        break;
                    }
                }
            }
        }
        cout << count << '\n';
    }
    return 0;
}