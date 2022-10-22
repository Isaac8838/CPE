#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    string encode = "234567890-=ertyuiop[]dfghjkl;'cvbnm,./";
    string decode = "`1234567890qwertyuiopasdfghjklzxcvbnm,";
    string s;
    while (getline(cin, s)) {
        for (auto c : s) {
            for (int i = 0; i < encode.size(); i++) {
                if (c == ' ') {
                    cout << ' ';
                    break;
                }
                else if (c == encode[i]) {
                    cout << decode[i];
                    break;
                }
                else if (c >= 'A' && c <= 'Z') {
                    if (c - 'A' == encode[i] - 'a')
                        cout << decode[i];
                    break;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}