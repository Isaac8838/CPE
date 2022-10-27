#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int n, m;
    cin >> n;
    while (n--) {
        int b1 = 0, b2 = 0;
        cin >> m;
        int temp = m;
        while (temp >= 2) {
            if (temp % 2 == 1) b1++;
            temp /= 2;
        }
        if (temp % 2 == 1) b1++;
        temp = m;
        while (temp > 0) {
            int dig = temp % 10;
            temp /= 10;
            for (int i = 0; i < 4; i++) {
                if (dig % 2 == 1) b2++;
                dig /= 2;
            }
        }
        cout << b1 << ' ' << b2 << '\n';
    }
    return 0;
}