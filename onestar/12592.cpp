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
    map<string, string> m;
    int n;
    string first, second;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, first);
        getline(cin, second);
        m[first] = second;
    }
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, first);
        cout << m[first] << '\n';
    }
    return 0;
}