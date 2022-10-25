#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    int t, n;
    string s;
    vector<ll> matrix;
    char c1, c2;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        bool nonSymmetric = false;
        cin >> c1 >> c2 >> n;
        matrix = vector<ll>(n * n, 0);
        for (int i = 0; i < n * n; i++) {
            cin >> matrix[i];
            if (matrix[i] < 0) nonSymmetric = true;
        }
        for (int i = 0, j = n * n - 1; i < n * n / 2; i++, j--) {
            if (matrix[i] != matrix[j]) {
                nonSymmetric = true;
                break;
            }
        }
        cout << "Test #" << c << ": ";
        if (nonSymmetric) cout << "Non-symmetric.\n";
        else cout << "Symmetric.\n";;
        matrix.clear();
    }
    return 0;
}