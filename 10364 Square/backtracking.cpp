#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <bitset>
using namespace std;
int N, sum;
vector<int> arr, box;
map<vector<int>, bool> vis;
void init() {
    box = vector<int>(4);
    arr = vector<int>(N);
    vis.clear();
    sum = 0;
}
bool DFS(int now = 0) {
    if (now == N) return true;
    vector<int> tmp(box.begin(), box.end());
    sort(tmp.begin(), tmp.end());
    if (vis[tmp]) return false;
    vis[tmp] = true;

    for (int i = 0; i < 4; i++) {
        if (box[i] + arr[now] <= sum) {
            box[i] += arr[now];
            if (DFS(now + 1))
                return true;
            box[i] -= arr[now];
        }
    }

    return false;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    while (T-- && cin >> N) {
        init();
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        if (sum % 4) {
            cout << "no\n";
            continue;
        }
        sum /= 4;

        sort(arr.begin(), arr.end(), [](const int &a, const int &b) {
            return a > b;
        });

        if (DFS()) cout << "yes\n";
        else cout << "no\n";
    }
}