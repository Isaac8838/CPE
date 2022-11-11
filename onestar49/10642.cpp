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
    int n, x[2], y[2];
    int sLine, dLine;
    ll pointSum;
    cin >> n;
    for (int c = 1; c <= n; c++) {
        cin >> x[0] >> y[0] >> x[1] >> y[1];
        sLine = x[0] + y[0];
        dLine = x[1] + y[1];
        pointSum = 0;
        for (int i = sLine + 1; i < dLine; i++) {
            pointSum += i + 1;
        }
        if (sLine == dLine) pointSum = ((y[0] + x[1]) - x[0] - y[1] - 2) / 2 + 1;
        else pointSum += y[0] + x[1] + 1;
        cout << "Case " << c << ": " << pointSum << '\n';
    }
    return 0;
}