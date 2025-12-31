#include <iostream>
using namespace std;
int main() {
    int T, N, cas = 0, prev, now;
    cin >> T;
    while (T-- && cin >> N) {
        int H = 0, L = 0;
        cin >> prev;
        for (int i = 1; i < N; i++) {
            cin >> now;
            if (now > prev) H++;
            else if (now < prev) L++;
            prev = now;
        }
        printf("Case %d: %d %d\n", ++cas, H, L);
    }
}