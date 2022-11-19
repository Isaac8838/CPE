#include <bits/stdc++.h>
using namespace std;
#define ll long long int
typedef pair<int, int> Pair;

void Row(vector<vector<int>> &matrix, int a, int b) {
    int n = matrix.size();
    int temp;
    for (int i = 0; i < n; i++) {
        temp = matrix[a][i];
        matrix[a][i] = matrix[b][i];
        matrix[b][i] = temp;
    }
}

void Col(vector<vector<int>> &matrix, int a, int b) {
    int n = matrix.size();
    int temp;
    for (int i = 0; i < n; i++) {
        temp = matrix[i][a];
        matrix[i][a] = matrix[i][b];
        matrix[i][b] = temp;
    }
}

void Inc(vector<vector<int>> &matrix) {
    for (auto &i : matrix) {
        for (auto &u : i) {
            u++;
            u %= 10;
        }
    }
}

void Dec(vector<vector<int>> &matrix) {
    for (auto &i : matrix) {
        for (auto &u : i) {
            u--;
            if (u < 0) u = 9;
        }
    }
}

void Transpose(vector<vector<int>> &matrix) {
    vector<vector<int>> temp = matrix;
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = temp[j][i];
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    #endif
    int t, n, m, a, b;
    bool first = true;
    vector<vector<int>> matrix;
    string command;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        cin >> n;
        matrix.clear();
        matrix = vector<vector<int>>(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                char c;
                cin >> c;
                matrix[i][j] = c - '0';
            }
        }
        cin >> m;
        while (m--) {
            cin >> command;
            if (command == "row") {
                cin >> a >> b;
                Row(matrix, a - 1, b - 1);
            }
            if (command == "col") {
                cin >> a >> b;
                Col(matrix, a - 1, b - 1);
            }
            if (command == "inc") {
                Inc(matrix);
            }
            if (command == "dec") {
                Dec(matrix);
            }
            if (command == "transpose") {
                Transpose(matrix);
            }
        }
        cout << "Case #" << c << '\n';
        for (auto i : matrix) {
            for (auto u : i) {
                cout << u;
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}