#include <iostream>
using namespace std;
int main() {
    int N, R, k;
    while (cin >> N >> R) {
        bool vis[N+1] = {};
        for (int i = 0; i < R; i++) {
            cin >> k;
            vis[k] = true;
        }
        if (N == R) cout << '*' << endl;
        else {
            for (int i = 1; i <= N; i++) {
                if (!vis[i]) cout << i << ' ';
            }
            cout << endl;
        }
    }
}