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
    vector<string> ss;
    while (getline(cin ,s)) {
        ss.push_back(s);
    }
    int length = 0;
    for (int i = 0; i < ss.size(); i++) {
        length = max(length, (int)ss[i].size());
    }
    for (int i = 0; i < length; i++) {
        for (int j = ss.size() - 1; j >= 0; j--) {
            if (ss[j].size() <= i) cout << ' ';
            else cout << ss[j][i];
        }
        cout << '\n';
    }
    return 0;
}