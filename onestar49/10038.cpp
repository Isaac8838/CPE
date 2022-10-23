#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int n;
    vector<int> jolly;
    vector<bool> check;
    while (cin >> n) {
        jolly.clear();
        check.clear();
        bool notJolly = false;
        jolly = vector<int>(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> jolly[i];
        }
        if (n == 1) {
            cout << "Jolly\n";
            continue;
        }
        check = vector<bool>(n, false);
        for (int i = 0; i < n - 1; i++) {
            int index = abs(jolly[i] - jolly[i + 1]);
            if (index < n)
                check[index] = true;
        }
        for (int i = 1; i < n; i++) {
            if (!check[i]) {
                notJolly = true;
                break;
            }
        }
        if (notJolly) cout << "Not jolly\n";
        else cout << "Jolly\n";
    }
    return 0;
}