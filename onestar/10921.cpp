#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    string s;
    int capital, hyphens;
    while (cin >> s) {
        capital = 0; hyphens = 0;
        for (auto i : s) {
            if (i == '0' || i == '1') cout << i;
            else if (i == '-') {
                hyphens++;
                cout << i;
            }
            else {
                capital++;
                if (i >= 'A' && i <= 'C') cout << 2;
                else if (i >= 'D' && i <= 'F') cout << 3;
                else if (i >= 'G' && i <= 'I') cout << 4;
                else if (i >= 'J' && i <= 'L') cout << 5;
                else if (i >= 'M' && i <= 'O') cout << 6;
                else if (i >= 'P' && i <= 'S') cout << 7;
                else if (i >= 'T' && i <= 'V') cout << 8;
                else if (i >= 'W' && i <= 'Z') cout << 9;
            }
        }
        cout << '\n';
        // cout << ' ' << capital << ' ' << hyphens << '\n';
    }
    return 0;
}