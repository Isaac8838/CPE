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
    int t;
    int n, m, k;
    int a, b;
    bool first;
    vector<int> sequence;
    vector<int> check;
    set<int> nums;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        first = true;
        cin >> n >> m >> k;
        sequence.clear();
        sequence.push_back(0);
        sequence.push_back(1);
        sequence.push_back(2);
        sequence.push_back(3);
        for (int i = 4; i <= n; i++) {
            int num = (sequence[i - 1] + sequence[i - 2] + sequence[i - 3]) % m + 1;
            sequence.push_back(num);
        }
        check.assign(k + 1, 0);
        nums.clear();
        int ans = INT_MAX;
        for (int i = 1; i < sequence.size(); i++) {
            if (sequence[i] > k) continue;
            nums.insert(sequence[i]);
            b = i;
            check[sequence[i]]++;
            if (first) {
                a = i;
                first = false;
            }
            while (a <= b && nums.size() == k) {
                if (sequence[a] > k) {
                    a++;
                    continue;
                }
                ans = min(ans, b - a + 1);
                if (check[sequence[a]] == 1) break;
                else check[sequence[a++]]--;
            }
        }
        cout << "Case " << c << ": ";
        if (ans == INT_MAX) cout << "sequence nai\n";
        else cout << ans << '\n';
    }
    return 0;
}