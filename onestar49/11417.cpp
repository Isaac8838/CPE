#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int GCD(int i, int j) {
    int t = 0;
    while (j != 0) {
        t = j;
        j = i % j;
        i = t;
    }
    return i;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int n;
    while (cin >> n && n != 0) {
        int G = 0;
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                G += GCD(i, j);
            }
        }
        cout << G << '\n';
    }
    return 0;
}