#include <iostream>
using namespace std;
int main() {
    int MAXN = 1001, arr[MAXN] = {};
    for (int i = 1; i * 2 < MAXN; i++) {
        for (int j = i+i; j < MAXN; j += i)
            arr[j] += i;
    }

    int T, N;
    cin >> T;
    while (T-- && cin >> N) {
        if (N == arr[N]) cout << "perfect\n";
        else if (N < arr[N]) cout << "abundant\n";
        else cout << "deficient\n";
    }
}