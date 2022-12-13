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
    int t, r, num, sum;
    vector<int> nums;
    cin >> t;
    while (t--) {
        sum = 0;
        nums.clear();
        cin >> r;
        for (int i = 0; i < r; i++) {
            cin >> num;
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
        int median = nums[r / 2];
        for (int i = 0; i < r; i++) {
            if (i == r / 2) continue;
            sum += abs(nums[i] - median);
        }
        cout << sum << '\n';
    }
    return 0;
}