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
    int r = 6440;
    double s, a, rad, radius;
    double arc, chord;
    string unit;
    while (cin >> s >> a >> unit) {
        if (unit == "min") a /= 60.0;
        while (a > 360) a -= 360;
        if (a > 180) a = 360 - a;
        rad = a * (M_PI / 180.0);
        radius = r + s;
        arc = radius * rad;
        chord = (radius * sin(rad / 2.0)) * 2.0;
        cout << fixed << setprecision(6) << arc << ' ' << chord << '\n';
    }
    return 0;
}