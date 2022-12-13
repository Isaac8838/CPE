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
    int a, b, ad, bd, carry, sum;
    while (cin >> a >> b) {
        if (!(a || b)) break;
        carry = 0;
        sum = 0;
        while (a || b) {
            ad = a % 10;
            bd = b % 10;
            if (ad + bd + carry >= 10) {
                sum++;
                carry = 1;
            }
            else carry = 0;
            a /= 10;
            b /= 10;
        }
        if (sum == 0) cout << "No carry operation.\n";
        else if (sum == 1) cout << sum << " carry operation.\n";
        else cout << sum << " carry operations.\n";
    }
    return 0;
}