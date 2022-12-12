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
    int t, amp, freq;
    bool first1 = true, first2;
    cin >> t;
    cin.ignore();
    while (t--) {
        if (first1) first1 = false;
        else cout << '\n';
        first2 = true;
        cin.ignore();
        cin >> amp >> freq;
        while (freq--) {
            if (first2) first2 = false;
            else cout << '\n';
            for (int i = 1; i <= amp; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << i;
                }
                cout << '\n';
            }
            for (int i = amp - 1; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << i;
                }
                cout << '\n';
            }
        }
    }
    return 0;
}