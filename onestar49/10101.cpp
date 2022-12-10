#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

void BanglaNum(ll n) {
    if (n >= 10000000) {
        BanglaNum(n / 10000000);
        cout << " kuti";
        n %= 10000000;
    }
    if (n >= 100000) {
        BanglaNum(n / 100000);
        cout << " lakh";
        n %= 100000;
    }
    if (n >= 1000) {
        BanglaNum(n / 1000);
        cout << " hajar";
        n %= 1000;
    }
    if (n >= 100) {
        BanglaNum(n / 100);
        cout << " shata";
        n %= 100;
    }
    if (n) {
        cout << ' ' << n;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int c = 1;
    ll num;
    while (cin >> num) {
        cout << setw(4) << c++ << '.';
        if (num) {
            BanglaNum(num);
            cout << '\n';
        }
        else cout << " 0" << '\n';
    }
    return 0;
}