#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

int GCD(ll a, ll b) {
    ll t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    ll v[2], d[2];
    double t[2];
    ll numerator, denominator;
    int c = 1;
    while (cin >> v[0] >> d[0] >> v[1] >> d[1]) {
        if (v[0] == 0 && d[0] == 0 && v[1] == 0 && d[1] == 0) break;
        numerator = d[0] * v[1] + d[1] * v[0];
        denominator = 2 * v[0] * v[1];
        t[0] = (double)d[0] / v[0];
        t[1] = (double)d[1] / v[1];
        cout << "Case #" << c++ << ": ";
        if (t[0] < t[1]) cout << "You owe me a beer!\n";
        else cout << "No beer for the captain.\n";
        cout << "Avg. arrival time: ";
        ll gcd = GCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
        if (numerator % denominator == 0) cout << numerator / denominator<< '\n';
        else cout << numerator << '/' << denominator << '\n';
    }
    return 0;
}