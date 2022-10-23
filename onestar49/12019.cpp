#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t, m, d;
    int year[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> t;
    while (t--) {
        cin >> m >> d;
        int day = 0;
        for (int i = 0; i < m - 1; i++) {
            day += year[i];
        }
        day += d + 5;
        if (day % 7 == 0) cout << "Sunday\n";
        else if (day % 7 == 1) cout << "Monday\n";
        else if (day % 7 == 2) cout << "Tuesday\n";
        else if (day % 7 == 3) cout << "Wednesday\n";
        else if (day % 7 == 4) cout << "Thursday\n";
        else if (day % 7 == 5) cout << "Friday\n";
        else cout << "Saturday\n"; 
    }
    return 0;
}