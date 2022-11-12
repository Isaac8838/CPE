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
    double x[4], y[4];
    double dx[2], dy[2];
    double fx, fy, sx, sy;
    bool isSame;
    while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]) {
        isSame = false;
        for (int i = 0; i < 4 && !isSame; i++) {
            for (int j = i + 1; j < 4 && !isSame; j++) {
                if (x[i] == x[j] && y[i] == y[j]) {
                    sx = x[i]; sy = y[i];
                    isSame = true;
                }
            }
        }
        for (int i = 0, j = 0; i < 4; i++) {
            if (x[i] != sx || y[i] != sy) {
                dx[j] = x[i]; dy[j] = y[i];
                j++;
            }
        }
        fx = dx[0] + dx[1] - sx;
        fy = dy[0] + dy[1] - sy;
        cout << fixed << setprecision(3) << fx << ' ' << fy << '\n';
    }
    return 0;
}