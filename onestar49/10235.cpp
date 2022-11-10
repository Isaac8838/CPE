#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

bool IsPrime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    string N;
    int n1, n2;
    stringstream ss;
    while (cin >> N) {
        ss.clear();
        ss << N;
        ss >> n1;
        if (IsPrime(n1)) {
            string temp = N;
            reverse(temp.begin(), temp.end());
            ss.clear();
            ss << temp;
            ss >> n2;
            if (IsPrime(n2) && n1 != n2) {
                cout << N << " is emirp.\n";
            }
            else {
                cout << N << " is prime.\n";
            }
        }
        else {
            cout << N << " is not prime.\n";
        }
    }
    return 0;
}