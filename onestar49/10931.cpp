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
    ll i;
    string bin;
    while (cin >> i && i != 0) {
        bin.clear();
        while (i != 1) {
            bin += (i % 2) + '0';
            i /= 2;
        }
        bin += i + '0';
        reverse(bin.begin(), bin.end());
        int cnt = 0;
        for (auto c : bin) {
            if (c == '1') cnt++;
        }
        cout << "The parity of ";
        cout << bin << " is " << cnt << " (mod 2).\n";
    }
    return 0;
}