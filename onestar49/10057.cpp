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
    int n, max, min;
    int count, possible;
    vector<int> x;
    while (cin >> n) {
        x.clear();
        int num;
        for (int i = 0; i < n; i++) {
            cin >> num;
            x.push_back(num);
        }
        sort(x.begin(), x.end());
        if (n % 2 == 1) min = max = x[n / 2];
        else {
            min = x[n / 2 - 1];
            max = x[n / 2];
        }
        count = 0;
        for (int i = 0; i < n; i++) {
            if (x[i] >= min && x[i] <= max) {
                count++;
            }
        }
        possible = max - min + 1;
        cout << min << ' ' << count << ' ' << possible << '\n';
    }
    return 0;
}