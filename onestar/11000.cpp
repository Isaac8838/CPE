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
    vector<ll> female;
    vector<ll> male;
    ll n, m, f;
    while (cin >> n) {
        if (n == -1) break;
        female.clear();
        male.clear();
        female.push_back(1);
        male.push_back(0);
        for (int i = 1; i <= n; i++) {
            m = female[i - 1] + male[i - 1];
            f = male[i - 1] + 1;
            female.push_back(f);
            male.push_back(m);
        }
        cout << male[n] << ' ' << male[n] + female[n] << '\n';
    }
    return 0;
}