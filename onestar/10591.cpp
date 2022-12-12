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
    int n, sum, temp, oriLen, p;
    set<int> rep;
    bool unhappy;
    cin >> p;
    for (int i = 1; i <= p; i++) {
        cin >> n;
        unhappy = false;
        rep.clear();
        rep.insert(n);
        oriLen = 1;
        temp = n;
        while (temp != 1) {
            sum = 0;
            while (temp != 0) {
                int digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }
            temp = sum;
            rep.insert(temp);
            if (oriLen == rep.size()) {
                unhappy = true;
                break;
            }
            else oriLen = rep.size();
        }
        cout << "Case #" << i << ": ";
        if (unhappy) cout << n << " is an Unhappy number.\n";
        else cout << n << " is a Happy number.\n";
    }
    return 0;
}