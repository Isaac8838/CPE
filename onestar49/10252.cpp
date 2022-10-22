#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    string s1, s2;
    int cnts1[26], cnts2[26];
    while (getline(cin, s1) && getline(cin, s2)) {
        for (int i = 0; i < 26; i++) {
            cnts1[i] = 0; cnts2[i] = 0;
        }
        for (auto i : s1) cnts1[i - 'a']++;
        for (auto i : s2) cnts2[i - 'a']++;
        for (int i = 0; i < 26; i++) {
            for (int j = min(cnts1[i], cnts2[i]); j > 0; j--) {
                cout << char(i + 'a');
            }
        }
        cout << '\n';
    }
    return 0;
}