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
    int n, t;
    vector<int> carriges;
    cin >> n;
    while (n--) {
        cin >> t;
        int num;
        carriges.clear();
        for (int i = 0; i < t; i++) {
            cin >> num;
            carriges.push_back(num);
        }
        int isDone = 0, count = 0, temp;
        while (isDone != t - 1 && t != 0) {
            isDone = 0;
            for (int j = 0; j < t - 1; j++) {
                if (carriges[j] > carriges[j + 1]) {
                    temp = carriges[j];
                    carriges[j] = carriges[j + 1];
                    carriges[j + 1] = temp;
                    count++;
                }
                else isDone++;
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps.\n";
    }
    return 0;
}