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
    int t, count;
    string s, temp;
    stringstream ss;
    bool first = true;
    cin >> t;
    cin.ignore();
    cin.ignore();
    for (int c = 1; c <= t; c++) {
        if (first) first = false;
        else cout << '\n';
        cout << "Case #" << c << ":\n";
        while (getline(cin, s)) {
            if (s == "") break;
            count = 0;
            ss.clear();
            ss << s;
            while (ss >> temp) {
                if (temp.size() > count) {
                    cout << temp[count++];
                }
            }
            cout << '\n';
        }
    }
    return 0;
}