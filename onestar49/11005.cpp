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
    ll num;
    int t, tn;
    vector<int> cost(36, 0);
    vector<int> sbase;
    vector<int> ans;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        for (int i = 0; i < 36; i++) {
            cin >> cost[i];
        }
        cin >> tn;
        cout << "Case " << c << ":\n";
        while (tn--) {
            cin >> num;
            ll temp;
            int smallest = INT_MAX;
            sbase.clear();
            for (int base = 2; base <= 36; base++) {
                int total = 0;
                temp = num;
                while (temp > 0) {
                    total += cost[temp % base];
                    temp /= base;
                }
                sbase.push_back(total);
                smallest = min(smallest, total);
            }
            cout << "Cheapest base(s) for number " << num << ": ";
            ans.clear();
            for (int i = 0; i < 35; i++) {
                if (sbase[i] == smallest) ans.push_back(i + 2);
            }
            for (int i = 0; i < ans.size(); i++) {
                if (i == ans.size() - 1) cout << ans[i];
                else cout << ans[i] << ' ';
            }
            cout << '\n';
        }
        if (c != t) cout << '\n';
    }
    return 0;
}