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
    while (getline(cin, s)) {
        for (auto i : s) {
            cout << (char)(i - 7);
        }
        cout << '\n';
    }
    return 0;
}