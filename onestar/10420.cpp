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
    int n;
    cin >> n;
    cin.ignore();
    string s, temp;
    stringstream ss;
    map<string, int> m;
    while (n--) {
        getline(cin, s);
        ss.str("");
        ss.clear();
        temp.clear();
        ss << s;
        ss >> temp;
        m[temp]++;
    }
    for (auto i : m) {
        cout << i.first << ' ' << i.second << '\n';
    }
    return 0;
}