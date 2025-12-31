#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> primes = {1};
    vector<bool> is_prime(1001, true);
    for (int i = 2; i < 1001; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i*i; j < 1001; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int N, C;
    while (cin >> N >> C) {
        cout << N << " " << C << ":";
        int L = upper_bound(primes.begin(), primes.end(), N) - primes.begin();
        if (L <= C*2-L%2) {
            for (int i = 0; i < L; i++) {
                cout << " " << primes[i];
            }
        }
        else {
            int left = (L - (C*2-L%2)) / 2;
            for (int i = 0; i < C*2-L%2; i++) {
                cout << " " << primes[left+i];
            }
        }
        cout << endl << endl;
    }
}