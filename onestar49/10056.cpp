#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t, n, i;
    double p;
    cin >> t;
    // n is number of player
    // p is probability
    // i is the ith winner

    // formula:
    // let q = 1 - p then
    // ith winner probability is 
    // (q^(i - 1) * p) / 1 - q^n
    // reference https://www.youtube.com/watch?v=soxR1USFDK0
    while (t--) {
        cin >> n >> p >> i;
        if (p == 0.0) {
            cout << fixed << setprecision(4) << p << '\n';
            continue;
        }
        double q = 1 - p;
        double ans = (pow(q, (double)(i - 1)) * p) / (1 - pow(q, (double)n));
        cout << fixed << setprecision(4) << ans << '\n';
    }
    return 0;
}