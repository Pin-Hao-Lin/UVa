#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
int main() {
    int T, N;
    bool first = true;
    cin >> T;
    while (T-- && cin >> N) {
        if (!first) cout << endl;
        first = false;
        int arr[N], sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            sum += arr[i];
        }

        vector<bitset<45001>> dp(N/2+1);
        dp[0].set(0);
        for (int k = 0; k < N; k++) {
            for (int i = min(N/2, k+1); i > 0; i--) {
                dp[i] |= (dp[i-1] << arr[k]);
            }
        }
        int result = 0;
        for (int i = 1; i <= sum; i++) {
            if (dp[N/2][i] && abs(sum-i-i) < abs(sum-result-result)) {
                result = i;
            }
        }
        cout << min(result, sum-result) << " " << max(result, sum-result) << endl;
    }
}