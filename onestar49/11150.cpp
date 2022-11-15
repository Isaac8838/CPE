#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

int Cola(int n) {
    int drink = n / 3, left = n % 3;
    int sum = 0;
    while (drink > 0) {
        sum = drink + left;
        drink = sum / 3;
        left = sum % 3;
    }
    return left;
}

int TotalCola(int cola, int borrow) {
    int n = cola + borrow;
    int drink = n / 3, left = n % 3;
    int sum = 0, totalCola = cola;
    while (drink > 0) {
        sum = drink + left;
        totalCola += drink;
        drink = sum / 3;
        left = sum % 3;
    }
    return totalCola;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int n;
    int borrow;
    int totalCola;
    while (cin >> n) {
        borrow = 0;
        totalCola = 0;
        while (borrow != 3) {
            if (borrow <= Cola(n + borrow))
                totalCola = max(totalCola, TotalCola(n, borrow));
            borrow++;
        }
        cout << totalCola << '\n';
    }
    return 0;
}