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
    string s;
    int odd, even;
    while (cin >> s) {
        odd = 0; even = 0;
        if (s == "0") break;
        for (int i = 0; i < s.size(); i++) {
            if (i % 2 == 0) even += s[i] - '0';
            else odd += s[i] - '0';
        }
        if (abs(odd - even) % 11 == 0) cout << s << " is a multiple of 11.\n";
        else cout << s << " is not a multiple of 11.\n";
    }
    return 0;
}