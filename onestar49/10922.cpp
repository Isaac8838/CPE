#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int SumOfNine(string s) {
    int sum = 0;
    for (auto i : s) {
        sum += i - '0';
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    string s;
    stringstream ss;
    int count, n;
    while (cin >> s) {
        count = 0;
        if (s == "0") break;
        string temp = s;
        while (s.size() > 1) {
            n = SumOfNine(s);
            if (n % 9 == 0) {
                count++;
            }
            ss.clear();
            ss << n;
            ss >> s;
        }
        if (temp == "9") count++;
        if (count == 0) {
            cout << temp << " is not a multiple of 9.\n";
        }
        else {
            cout << temp << " is a multiple of 9 and has 9-degree " << count << ".\n";
        }
    }
    return 0;
}