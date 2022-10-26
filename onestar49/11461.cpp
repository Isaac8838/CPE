#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    vector<bool> squareNums(100001, false);

    for (int i = 1; i * i <= 100000; i++) {
        squareNums[i * i] = true;
    }

    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) break;
        int count = 0;
        for (int i = a; i <= b; i++) {
            if (squareNums[i]) count++;
        }
        cout << count << '\n';
    }
    return 0;
}