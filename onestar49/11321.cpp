#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

bool SortOddEven(int x, int y) {
    if (abs(x % 2) == 1 && abs(y % 2) == 1) {
        return x > y;
    }
    else if (abs(x % 2) == 0 && abs(y % 2) == 0) {
        return x < y;
    }
    else {
        if (abs(x % 2) == 1) return true;
        else return false;
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
    int n, m;
    vector<vector<int>> nums;
    while (cin >> n >> m) {
        cout << n << ' ' << m << '\n';
        if (n == 0 && m == 0) {
            break;
        }
        int num;
        nums.clear();
        nums = vector<vector<int>>(m * 2 - 1, vector<int>());
        while (n--) {
            cin >> num;
            int index;
            if (num % m < 0) index = abs(num % m) - 1 + m;
            else index = num % m;
            nums[index].push_back(num);
        }
        for (int i = 0; i < m * 2 - 1; i++) {
            sort(nums[i].begin(), nums[i].end(), SortOddEven);
        }
        for (int i = m * 2 - 1 - 1; i >= m; i--) {
            for (auto u : nums[i]) {
                cout << u << '\n';
            }
        }
        for (int i = 0; i < m; i++) {
            for (auto u : nums[i]) {
                cout << u << '\n';
            }
        }
    }
    return 0;
}