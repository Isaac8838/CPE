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
    int n, t = 1, numOfCool;
    bool notCool;
    string s;
    vector<int> alphbetCount;
    while (cin >> n) {
        numOfCool = 0;
        while (n--) {
            notCool = false;
            alphbetCount.assign(26, 0);
            cin >> s;
            
            for (auto i : s) {
                alphbetCount[i - 'a']++;
            }
            int count = 0;
            for (auto i : alphbetCount) {
                if (i) count++;
            }
            if (count == 1) notCool = true;
            for (int i = 0; i < 26 && !notCool; i++) {
                if (!alphbetCount[i]) continue;
                for (int j = i + 1; j < 26; j++) {
                    if (!alphbetCount[j]) continue;
                    if (alphbetCount[i] == alphbetCount[j]) {
                        notCool = true;
                        break;
                    }
                }
            }   
            
            if (!notCool) {
                numOfCool++;
            }
        }
        cout << "Case " << t++ << ": " << numOfCool << '\n';
    }
    return 0;
}