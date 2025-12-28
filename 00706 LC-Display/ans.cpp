#include <iostream>
#include <vector>
using namespace std;
int n;
vector<vector<char>> result;
void F(int pos, vector<bool> &flag) {
    if (flag[0]) {
        for (int i = 0; i < n; i++)
            result[1+i][pos] = '|';
    }
    if (flag[1]) {
        for (int i = 0; i < n; i++)
            result[2+n+i][pos] = '|';
    }
    if (flag[2]) {
        for (int i = 0; i < n; i++)
            result[0][pos+1+i] = '-';
    }
    if (flag[3]) {
        for (int i = 0; i < n; i++)
            result[n+1][pos+1+i] = '-';
    }
    if (flag[4]) {
        for (int i = 0; i < n; i++)
            result[n*2+2][pos+1+i] = '-';
    }
    if (flag[5]) {
        for (int i = 0; i < n; i++)
            result[1+i][pos+n+1] = '|';
    }
    if (flag[6]) {
        for (int i = 0; i < n; i++)
            result[2+n+i][pos+n+1] = '|';
    }
}
int main() {
    vector<vector<bool>> flag = {{1, 1, 1, 0, 1, 1, 1},   // 0
                                 {0, 0, 0, 0, 0, 1, 1},   // 1
                                 {0, 1, 1, 1, 1, 1, 0},   // 2
                                 {0, 0, 1, 1, 1, 1, 1},   // 3
                                 {1, 0, 0, 1, 0, 1, 1},   // 4
                                 {1, 0, 1, 1, 1, 0, 1},   // 5
                                 {1, 1, 1, 1, 1, 0, 1},   // 6
                                 {0, 0, 1, 0, 0, 1, 1},   // 7
                                 {1, 1, 1, 1, 1, 1, 1},   // 8
                                 {1, 0, 1, 1, 1, 1, 1}    // 9
                                };
    string s;
    while (cin >> n >> s) {
        if (!n && s == "0") break;
        result = vector<vector<char>>(n*2+3, vector<char>((n+2)*s.size()+s.size()-1, ' '));
        int pos = 0;
        for (auto &c: s) {
            F(pos, flag[c-'0']);
            pos += n + 3;
        }
        for (auto &it: result) {
            for (auto &it2: it) {
                cout << it2;
            }
            cout << endl;
        }
        cout << endl;
    }
}