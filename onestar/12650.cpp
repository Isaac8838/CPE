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
    int n, r, num;
    vector<bool> identifier;
    bool allReturn;
    while (cin >> n >> r) {
        allReturn = true;
        identifier.assign(n, false);
        for (int i = 0; i < r; i++) {
            cin >> num;
            identifier[num - 1] = true;
        }
        for (int i = 0; i < n; i++) {
            if (!identifier[i]) {
                cout << i + 1 << ' ';
                allReturn = false;
            }
        }
        if (allReturn) cout << '*';
        cout << '\n';
    }
    return 0;
}