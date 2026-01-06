#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
using namespace std;
int N, sum, remain;
vector<int> arr(20);
vector<bool> vis;
void init() {
    vis = vector<bool>(N);
    sum = 0;
    remain = N;
}
bool check(int others) {
    int MX, MN = 21;
    for (int i = 0; i < N; i++) {
        if (!vis[i]) { 
            MX = i;
            vis[MX] = true;
            remain--;
            break;
        }
    }
    int Limit = sum - arr[MX];

    if (!Limit) {
        return true;
    }

    int dp[remain+1][Limit+1] = {};
    dp[0][0] = -1;
    
    for (int k = MX+1, cnt = 0; k < N; k++) {
        if (!vis[k]) {
            cnt++;
            for (int i = min(remain-others, cnt); i > 0; i--) {
                for (int j = arr[k]; j <= Limit; j++) {
                    if (!dp[i][j] && dp[i-1][j-arr[k]]) {
                        dp[i][j] = k+1;
                        if (j == Limit) {
                            MN = min(MN, i);
                        }
                    }
                }
            }
        }
    }
    if (MN != 21) {
        cout << arr[MX] << " ";
        int k = dp[MN][Limit] - 1;
        while (Limit) {
            cout << arr[k] << " ";
            vis[k] = true;
            Limit -= arr[k];
            MN--;
            k = dp[MN][Limit] - 1;
            remain--;
        }
        cout << endl;
        return true;
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
        if (arr[0] > sum) {
            cout << "no\n";
            continue;
        }

        if (check(3) && check(2) && check(1)) cout << "yes\n";
        else cout << "no\n";
    }
}
/*
12 4 33 44 24 32 1 40 25 36 34 21 6
44 40 36 34 33 32 25 24 21 6 4 1

*/