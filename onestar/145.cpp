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
    char distance;
    string numberCall;
    int h[2], m[2], x, y;
    double sum;
    double const cost[5][3] = {{0.10, 0.06, 0.02},
	                           {0.25, 0.15, 0.05},
	                           {0.53, 0.33, 0.13},
	                           {0.87, 0.47, 0.17},
	                           {1.44, 0.80, 0.30}};
    while (cin >> distance && distance != '#') {
        int minu[1440] = {}, time[3] = {};
        sum = 0.0;
        cin >> numberCall >> h[0] >> m[0] >> h[1] >> m[1];
        x = h[0] * 60 + m[0];
        y = h[1] * 60 + m[1];
        if (y <= x) {
            for (int i = 0; i < y; i++) {
                minu[i] = 1;
            }
            for (int i = x; i < 1440; i++) {
                minu[i] = 1;
            }
        }
        else {
            for (int i = x; i < y; i++) {
                minu[i] = 1;
            }
        }
        for (int i = 0; i < 480; i++) {
            if (minu[i] == 1)
                time[2]++;
        }
        for (int i = 480; i < 1080; i++) {
            if (minu[i] == 1)
                time[0]++;
        }
        for (int i = 1080; i < 1320; i++) {
            if (minu[i] == 1)
                time[1]++;
        }
        for (int i = 1320; i < 1440; i++) {
            if (minu[i] == 1)
                time[2]++;
        }
        sum = time[0] * cost[distance - 'A'][0] + time[1] * cost[distance - 'A'][1] + time[2] * cost[distance - 'A'][2];
        cout << setw(10) << numberCall << setw(6) << time[0] << setw(6) << time[1] << setw(6) << time[2] << setw(3) << distance << setw(8) << fixed << setprecision(2) << sum << '\n';
    }
    return 0;
}