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
    int n;
    string s;
    while (cin >> n) {
        if (n == 0) break;
        int north = 2, east = 4, south = 5, west = 3;
        int top = 1;
        while (n--) {
            cin >> s;
            if (s == "north") {
                north = top;
                top = south;
                south = 7 - north;
            }
            else if (s == "east") {
                east = top;
                top = west;
                west = 7 - east;
            }
            else if (s == "south") {
                south = top;
                top = north;
                north = 7 - south;
            }
            else if (s == "west") {
                west = top;
                top = east;
                east = 7 - west;
            }
        }
        cout << top << '\n';
    }
    return 0;
}