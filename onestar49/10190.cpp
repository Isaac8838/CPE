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
    ll n, m;
    vector<ll> nums;
    bool isBoring;
    while (cin >> n >> m) {
        isBoring = false;
        nums.clear();
        ll temp = n;
        if (n == 0 || m == 0) isBoring = true;
        if (n == 1 && m == 1) isBoring = true;
        if (n < m) isBoring = true;
        while (temp > 1 && !isBoring) {
            if (temp % m == 0 && m != 1) {
                temp /= m;
                nums.push_back(temp);
            }
            else {
                isBoring = true;
                break;
            }
        }
        if (isBoring) cout << "Boring!\n";
        else {
            cout << n;
            for (auto i : nums) {
                cout << ' ' << i;
            }
            cout << '\n';
        }
    }
    return 0;
}