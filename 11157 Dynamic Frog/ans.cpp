#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int MX(int *start, int *end) {
    int N = end - start + 1, result = 0;
    for (int i = 1; i < N; i++) {
        if (i & 1) {
            result = max(result, start[i] - start[max(0, i-1)]);
            result = max(result, start[min(N-1, i+2)] - start[i]);
        }
        else {
            result = max(result, start[i] - start[i-2]);
            result = max(result, start[min(N-1, i+1)] - start[i]);
        }
    }
    return result;
}
int main() {
    int T, N, D, k, cas = 0;
    char t, tmp;
    cin >> T;
    while (T-- && cin >> N >> D) {
        vector<int> big = {0};
        unordered_map<int, int> mp = {{0, 0}, {D, N+1}};
        int arr[N+2]; arr[0] = 0; arr[N+1] = D;
        for (int i = 1; i <= N; i++) {
            cin >> t >> tmp >> arr[i];
            if (t == 'B') {
                big.push_back(arr[i]);
                mp[arr[i]] = i;
            }
        }
        big.push_back(D);

        int result = 0;
        for (int i = 1; i < big.size(); i++) {
            result = max(result, MX(arr+mp[big[i-1]], arr+mp[big[i]]));
        }
        printf("Case %d: %d\n", ++cas, result);
    }
}