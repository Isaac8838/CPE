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
    int t;
    cin >> t;
    cin.ignore();
    string s;
    vector<int> buttons;
    vector<bool> lastPress;
    while (t--) {
        buttons.clear();
        lastPress.clear();
        buttons = vector<int>(11, 0);
        lastPress = vector<bool>(11, false);
        getline(cin, s);
        for (auto c : s) {
            if (c == 'c') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 2 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else if (i >= 7 && i <= 10) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    } 
                    else lastPress[i] = false;
                }
            }
            else if (c == 'd') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 2 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else if (i >= 7 && i <= 9) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'e') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 2 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else if (i >= 7 && i <= 8) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'f') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 2 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else if (i == 7) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'g') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 2 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'a') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 2 && i <= 3) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'b') {
                for (int i = 1; i <= 10; i++) {
                    if (i == 2) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'C') {
                for (int i = 1; i <= 10; i++) {
                    if (i == 3) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    } 
                    else lastPress[i] = false;
                }
            }
            else if (c == 'D') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 1 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else if (i >= 7 && i <= 9) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'E') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 1 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else if (i >= 7 && i <= 8) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'F') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 1 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else if (i == 7) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'G') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 1 && i <= 4) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'A') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 1 && i <= 3) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
            else if (c == 'B') {
                for (int i = 1; i <= 10; i++) {
                    if (i >= 1 && i <= 2) {
                        if (!lastPress[i]) {
                            buttons[i]++;
                            lastPress[i] = true;
                        }
                    }
                    else lastPress[i] = false;
                }
            }
        }
        bool first = true;
        for (int i = 1; i <= 10; i++) {
            if (first) first = false;
            else cout << ' ';
            cout << buttons[i];
        }
        cout << '\n';
    }
    return 0;
}