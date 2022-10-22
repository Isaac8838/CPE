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
    stringstream ss;
    while (cin >> s) {
        if (s == "0") break;
        while (s.size() != 1) {
            int sum = 0;
            int temp;
            for (auto i : s) {
                ss.clear();
                ss << i;
                ss >> temp;
                sum += temp;
            }
            ss.clear();
            ss << sum;
            ss >> s;
        }
        cout << s << '\n';
    }
    return 0;
}