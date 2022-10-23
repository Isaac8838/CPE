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
    string temp;
    int change = 0;
    while (getline(cin, s)) {
        temp.clear();
        for (auto i : s) {
            if (i == '"' && change == 0) {
                temp += "``";
                change = 1;
            }
            else if (i == '"' && change == 1) {
                temp += "''";
                change = 0;
            }
            else temp += i;
        }
        cout << temp << '\n';
    }
    return 0;
}