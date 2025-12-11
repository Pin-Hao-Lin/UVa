#include <iostream>
using namespace std;
int main() {
    const int MX = 500, MOD = 1000007;
    int C[MX][MX] = {};
    C[0][0] = 1;
    for (int i = 1; i < MX; i++) {
        C[i][0] = 1;
        for (int j = 1; j < MX; j++) {
            C[i][j] = (C[i-1][j] + C[i-1][j-1]) % MOD;
        }
    }

    int T, N, M, K, cas = 0;
    cin >> T;
    while (T-- && cin >> N >> M >> K) {
        int result = 0;
        for (int i = 0; i <= 15; i++) {
            int cnt = 0, r = N, c = M;
            for (int j = 0; j < 4; j++) {
                if (i & (1 << j)) {
                    cnt++;
                    if (j & 1) r--;
                    else c--;
                }
            }
            if (cnt & 1) result -= C[r*c][K];
            else result += C[r*c][K];
            result = (result + MOD) % MOD;
        }
        cout << "Case " << ++cas << ": ";
        cout << result << endl;
    }
}