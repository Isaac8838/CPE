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
    int a, b, num, ori;
    set<int> A, B;
    while (cin >> a >> b) {
        if (!(a || b)) break;
        A.clear(); B.clear();
        for (int i = 0; i < a; i++) {
            cin >> num;
            A.insert(num);
        }
        for (int i = 0; i < b; i++) {
            cin >> num;
            B.insert(num);
        }
        if (A.size() <= B.size()) {
            ori = B.size();
            for (auto i : A) {
                B.insert(i);
            }
            cout << B.size() - ori << '\n';
        }
        else {
            ori = A.size();
            for (auto i : B) {
                A.insert(i);
            }
            cout << A.size() - ori << '\n';
        }
    }
    return 0;
}