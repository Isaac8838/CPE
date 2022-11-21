#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    set<int> senior, diff;
    int t, n, num;
    cin >> t;
    while (t--) {
        cin >> n;
        senior.clear();
        diff.clear();
        cin >> num;
        senior.insert(num);
        for (int i = 1; i < n; i++) {
            cin >> num;
            diff.insert(*senior.rbegin() - num);
            senior.insert(num);
        }
        cout << *diff.rbegin() << '\n';
    }
    return 0;
}