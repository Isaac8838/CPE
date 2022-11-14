#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

bool IsLost(vector<Pair> &scent, int x, int y) {
    for (auto i : scent) {
        if (i.first == x && i.second == y) return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int m, n, x, y;
    char dir;
    bool LOST;
    vector<Pair> scent;
    string s;
    scent.clear();
    cin >> m >> n;
    while (cin >> x >> y >> dir) {
        LOST = false;
        cin >> s;
        for (auto i : s) {
            if (i == 'L') {
                if (dir == 'N') dir = 'W';
                else if (dir == 'S') dir = 'E';
                else if (dir == 'E') dir = 'N';
                else if (dir == 'W') dir = 'S';
            }
            else if (i == 'R') {
                if (dir == 'N') dir = 'E';
                else if (dir == 'S') dir = 'W';
                else if (dir == 'E') dir = 'S';
                else if (dir == 'W') dir = 'N';
            }
            else if (i == 'F') {
                if (dir == 'N') {
                    if (y + 1 <= n) y++;
                    else {
                        if (IsLost(scent, x, y)) continue;
                        scent.push_back(make_pair(x, y));
                        LOST = true;
                    }
                }
                else if (dir == 'S') {
                    if (y - 1 >= 0) y--;
                    else {
                        if (IsLost(scent, x, y)) continue;
                        scent.push_back(make_pair(x, y));
                        LOST = true;
                    }
                }
                else if (dir == 'E') {
                    if (x + 1 <= m) x++;
                    else {
                        if (IsLost(scent, x, y)) continue;
                        scent.push_back(make_pair(x, y));
                        LOST = true;    
                    }
                }
                else if (dir == 'W') {
                    if (x - 1 >= 0) x--;
                    else {
                        if (IsLost(scent, x, y)) continue;
                        scent.push_back(make_pair(x, y));
                        LOST = true;
                    }
                }
                if (LOST) {
                    cout << x << ' ' << y << ' ' << dir << " LOST\n";
                    break;
                }
            }
        }
        if (!LOST) cout << x << ' ' << y << ' ' << dir << '\n';
    }
    return 0;
}