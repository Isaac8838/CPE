#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t, a, b;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        cin >> a >> b;
        int sum = 0;
        for (int i = a; i <= b; i++) {
            if (i % 2 != 0) sum += i; 
        }
        cout << "Case " << c << ": ";
        cout << sum << '\n';
    }
    return 0;
}