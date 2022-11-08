#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int BinaryToDecimal(string &s) {
    int val = 0;
    int base = 1;
    for (int i = s.size() - 1; i >= 0; i--) {
        val += (s[i] - '0') * base;
        base *= 2;
    }
    return val;
}

bool GCD(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    if (a == 1) return false;
    else return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int n, decS1, decS2;
    string s1, s2;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s1 >> s2;
        decS1 = BinaryToDecimal(s1);
        decS2 = BinaryToDecimal(s2);
        cout << "Pair #" << i << ": ";
        if (GCD(decS1, decS2)) cout << "All you need is love!\n";
        else cout << "Love is not all you need!\n";
    }
    return 0;
}