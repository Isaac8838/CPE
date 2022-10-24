#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    ll x;
    stringstream ss;
    string s;
    vector<ll> nums;
    while (cin >> x) {
        cin.ignore();
        getline(cin, s);
        ss.clear();
        ss << s;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        ll sum = 0;
        ll temp = 1;
        for (int i = 1, j = nums.size() - 2; i < nums.size(); i++, j--) {
            sum += nums[j] * i * temp;
            temp *= x;
        }
        cout << sum << '\n';
        nums.clear();
    }
    return 0;
}