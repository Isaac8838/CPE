#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

bool CheckDig(int a, int b) {
    int dig[10] = {};
    if (a < 10000 && b < 10000) return false;
    if (a < 10000 || b < 10000) dig[0] = 1;
    while (a > 0) {
        if (dig[a % 10] == 1) return false;
        else dig[a % 10] = 1;
        a /= 10;
    }
    while (b > 0) {
        if (dig[b % 10] == 1) return false;
        else dig[b % 10] = 1;
        b /= 10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int n, num;
    bool first = true;
    bool ans;
    while (cin >> n) {
        if (n == 0) break;
        if (first) first = false;
        else cout << '\n';
        ans = false;
        for (int i = 1234; i <= 49876; i++) {
            num = i * n;
            if (num > 99999) continue;
            else {
                if (CheckDig(num, i)) {
                    ans = true;
                    cout << setw(5) << setfill('0') << num;
                    cout << " / ";
                    cout << setw(5) << setfill('0') << i;
                    cout << " = " << n << '\n';
                }
            }
        }
        if (!ans) cout << "There are no solutions for " << n << ".\n";
    }
    return 0;
}