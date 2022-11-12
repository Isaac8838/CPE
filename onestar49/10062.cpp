#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

bool CmpFirst(Pair &x, Pair &y) {
    return x.first > y.first;
}

bool CmpSecond(Pair x, Pair y) {
    return x.second < y.second;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    string s;
    map<char, int> m;
    vector<Pair> ASCII;
    bool first = true;
    while (getline(cin, s)) {
        if (first) first = false;
        else cout << '\n';
        m.clear();
        for (auto i : s) {
            m[i]++;
        }
        ASCII.clear();
        for (auto &it : m) {
            ASCII.push_back(it);
        }
        sort(ASCII.begin(), ASCII.end(), CmpFirst);
        stable_sort(ASCII.begin(), ASCII.end(), CmpSecond);
        for (auto i : ASCII) {
            cout << (int)i.first << ' ' << i.second << '\n';
        }
    }
    return 0;
}