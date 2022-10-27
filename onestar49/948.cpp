#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    vector<ll> fib;
    fib.push_back(1);
    fib.push_back(2);
    for (ll i = 0; fib.back() < 1000000000; i++) {
        fib.push_back(fib[i] + fib[i + 1]);
    }
    fib.pop_back();
    int n;
    ll num, last = fib.back(), temp;
    bool first = false;
    string fibBase;
    cin >> n;
    while (n--) {
        first = false;
        fibBase.clear();
        cin >> num;
        temp = num;
        for (ll i = fib.size() - 1; i >= 0; i--) {
            if (temp>= fib[i]) {
                if (i + 1 < fib.size() && fib[i + 1] != last) {
                    temp -= fib[i];
                    fibBase += '1';
                    first = true;
                }
            }
            else if (first) fibBase += '0';
        }
        cout << num << " = " << fibBase << " (fib)\n";
    }
    return 0;
}