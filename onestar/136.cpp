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
    vector<int> uglyNum(1501, 0);
    uglyNum[1] = 1;
    int idx1 = 1, idx2 = 1, idx3 = 1;
    for (int i = 2; i <= 1500; i++) {
        uglyNum[i] = min({uglyNum[idx1] * 2,
                         uglyNum[idx2] * 3,
                         uglyNum[idx3] * 5});
        if (uglyNum[i] == uglyNum[idx1] * 2) idx1++;
        if (uglyNum[i] == uglyNum[idx2] * 3) idx2++;
        if (uglyNum[i] == uglyNum[idx3] * 5) idx3++;
    }
    cout << "The 1500'th ugly number is " << uglyNum[1500] << ".";
    return 0;
}