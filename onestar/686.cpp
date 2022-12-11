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
    int n, count;
    int prime[32769] = {};
    for (int i = 2; i < 32769; i++) {
        if (!prime[i]) {
            for (int j = i; i * j <= 32768; j++) {
                prime[i * j] = 1;
            }
        }
    }
    while (cin >> n && n != 0) {
        count = 0;
        for (int i = 2; i <= n / 2; i++) {
            if (prime[i] == 0 && prime[n - i] == 0) {
                count++;
            }
        }
        cout << count << '\n';
    }
    return 0;
}