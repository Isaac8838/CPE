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
    int t, num;
    string s, digits;
    stack<char> alphbet;
    stringstream ss;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        cin >> s;
        digits.clear();
        while (!alphbet.empty()) alphbet.pop();
        cout << "Case " << c << ": ";
        for (auto i : s) {
            if (isdigit(i)) {
                digits += i;
                continue;
            }
            if (i >= 'A' && i <= 'Z') {
                if (digits.size() != 0) {
                    ss.clear();
                    ss << digits;
                    ss >> num;
                    while (num--) {
                        cout << alphbet.top();
                    }
                    alphbet.pop();
                    digits.clear();
                }
                alphbet.push(i);
            }
        }
        if (!alphbet.empty()) {
            ss.clear();
            ss << digits;
            ss >> num;
            while (num--) {
                cout << alphbet.top();
            }
            alphbet.pop();
            digits.clear();
        }
        cout << '\n';
    }
    return 0;
}