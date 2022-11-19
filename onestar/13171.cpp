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
    int n;
    int m, y, c;
    vector<int> myc(3, 0);
    string paint;
    bool No;
    cin >> n;
    while (n--) {
        No = false;
        cin >> myc[0] >> myc[1] >> myc[2] >> paint;
        for (auto i : paint) {
            if (i == 'M') {
                if (myc[0] - 1 < 0) {
                    No = true;
                    break;
                }
                else myc[0]--;
            }
            if (i == 'Y') {
                if (myc[1] - 1 < 0) {
                    No = true;
                    break;
                }
                else myc[1]--;
            }
            if (i == 'C') {
                if (myc[2] - 1 < 0) {
                    No = true;
                    break;
                }
                else myc[2]--;
            }
            if (i == 'R') {
                if (myc[0] - 1 < 0 || myc[1] - 1 < 0) {
                    No = true;
                    break;
                }
                else {
                    myc[0]--; myc[1]--;
                }
            }
            if (i == 'G') {
                if (myc[1] - 1 < 0 || myc[2] - 1 < 0) {
                    No = true;
                    break;
                }
                else {
                    myc[1]--; myc[2]--;
                }
            }
            if (i == 'V') {
                if (myc[0] - 1 < 0 || myc[2] - 1 < 0) {
                    No = true;
                    break;
                }
                else {
                    myc[0]--; myc[2]--;
                }
            }
            if (i == 'B') {
                if (myc[0] - 1 < 0 || myc[1] - 1 < 0 || myc[2] - 1 < 0) {
                    No = true;
                    break;
                }
                else {
                    myc[0]--; myc[1]--; myc[2]--;
                }
            }
        }
        if (No) cout << "NO\n";
        else cout << "YES " << myc[0] << ' ' << myc[1] << ' ' << myc[2] << '\n';
    }
    return 0;
}