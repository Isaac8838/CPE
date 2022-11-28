#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

int Dec(string &s, int baseF) {
    int dec = 0, base = 1;
    int num;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] >= 'A' && s[i] <= 'F') {
            num = (s[i] - 'A') + 10;
        }
        else num = s[i] - '0';
        dec += num * base;
        base *= baseF;
    }
    return dec;
}

string Convert(int dec, int base) {
    int left;
    string s;
    s.clear();
    while (dec >= base) {
        left = dec % base;
        dec /= base;
        if (left >= 10 && left <= 15) {
            s += (char)((left - 10) + 'A');
        }
        else s += (char)(left + '0');
    }
    if (dec >= 10 && dec <= 15) {
        s += (char)((dec - 10) + 'A');
    }
    else s += (char)(dec + '0');
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    string s, ans;
    int baseF, baseT;
    int dec;
    while (cin >> s >> baseF >> baseT) {
        dec = Dec(s, baseF);
        ans = Convert(dec, baseT);
        if (ans.size() > 7) {
            /*reverse(ans.begin(), ans.end());
            ans.resize(7);
            reverse(ans.begin(), ans.end());
            cout << ans << '\n';*/
            cout << "  ERROR\n";
        }
        else cout << setw(7) << setfill(' ') << ans << '\n';
    }
    return 0;
}