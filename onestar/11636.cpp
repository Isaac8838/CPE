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
    int n, c = 1, helloWorld, count;
    while (cin >> n) {
        if (n < 0) break;
        count = 0;
        helloWorld = 1;
        while (helloWorld < n) {
            helloWorld += helloWorld;
            count++;
        }
        cout << "Case " << c++ << ": ";
        cout << count << '\n';
    }
    return 0;
}