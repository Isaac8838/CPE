#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    string s;
    while (cin >> s) {
        int large = 1, sum = 0;
        int temp;
        for (auto i : s) {
            temp = 0;
            if (i >= '0' && i <= '9') temp = i - '0';
            else if (i >= 'A' && i <= 'Z') temp = i - 'A' + 10;
            else if (i >= 'a' && i <= 'z') temp = i - 'a' + 36;
            sum += temp;
            large = max(temp, large);
        }
        int r;
        for (r = large + 1; r <= 62; r++) {
            if ((sum % (r - 1)) == 0) break;
        }
        if (r <= 62) cout << r << '\n';
        else cout << "such number is impossible!\n";
    }
    return 0;
}