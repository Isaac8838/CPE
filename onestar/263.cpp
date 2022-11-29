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
    string s;
    stringstream ss;
    ll num, ascending, descending, cl;
    vector<ll> nums;
    bool repeat;
    while (cin >> s) {
        if (s == "0") break;
        cout << "Original number was " << s << '\n';
        nums.clear();
        cl = 0;
        repeat = false;
        while (!repeat) {
            sort(s.begin(), s.end());
            ss.clear();
            ss << s;
            ss >> ascending;
            reverse(s.begin(), s.end());
            ss.clear();
            ss << s;
            ss >> descending;
            num = descending - ascending;
            cout << descending << " - " << ascending << " = " << num << '\n';
            cl++;
            for (auto i : nums) {
                if (i == num) {
                    cout << "Chain length " << cl << '\n' << '\n';
                    repeat = true;
                    break;
                }
            }
            if (!repeat)
                nums.push_back(num);
            ss.clear();
            ss << num;
            ss >> s;
        }
    }
    return 0;
}