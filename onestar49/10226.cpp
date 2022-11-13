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
    int t, n;
    string s;
    map<string, int> m;
    double percentage;
    bool first = true;
    cin >> t;
    cin.ignore();
    cin.ignore();
    while (t--) {
        if (first) first = false;
        else cout << '\n';
        m.clear();
        n = 0;
        while (getline(cin, s)) {
            if (s == "") break;
            m[s]++;
            n++;
        }
        percentage = 100.0 / n;
        for (auto i : m) {
            cout << i.first << ' ';
            cout << fixed << setprecision(4) << i.second * percentage << '\n';
        }
    }
    return 0;
}