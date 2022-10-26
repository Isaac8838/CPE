#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<char, int> Pair;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
    vector<int> sum;
    vector<int> num;
    int n, c = 1;
    while (cin >> n) {
        bool notB2Sequence = false;
        int temp;
        num.clear();
        sum  = vector<int>(20001, 0);
        for (int i = 0; i < n; i++) {
            cin >> temp;
            num.push_back(temp);
        }
        temp = num[0];
        if (temp < 1) notB2Sequence = true;
        for (int i = 1; i < n && !notB2Sequence; i++) {
            if (temp > num[i]) notB2Sequence = true;
            else temp = num[i];
        }
        for (int i = 0; i < n && !notB2Sequence; i++) {
            for (int j = i; j < n && !notB2Sequence; j++) {
                sum[num[i] + num[j]]++;
            }
        }
        for (int i = 0; i < 20001 && !notB2Sequence; i++) {
            if (sum[i] > 1) notB2Sequence = true;
        }
        cout << "Case #" << c++ << ": ";
        if (notB2Sequence) cout << "It is not a B2-Sequence.\n";
        else cout << "It is a B2-Sequence.\n";
        cout << '\n';
    }
    return 0;
}