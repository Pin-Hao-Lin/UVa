#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int main() {
    map<char, vector<double>> mp = {{'A', {0.10, 0.06, 0.02}},
                                    {'B', {0.25, 0.15, 0.05}},
                                    {'C', {0.53, 0.33, 0.13}},
                                    {'D', {0.87, 0.47, 0.17}},
                                    {'E', {1.44, 0.80, 0.30}}
                                   }; 

    int arr[4] = {480, 1080, 1320, 1440};

    char A, id[10];
    int H1, M1, H2, M2, T1, T2;
    while (cin >> A && A != '#') {
        cin >> id >> H1 >> M1 >> H2 >> M2;
        T1 = (H1 * 60 + M1) % 1440;
        T2 = (H2 * 60 + M2) % 1440;

        int cnt[4] = {};
        do {
            cnt[upper_bound(arr, arr+4, T1)-arr]++;
            T1 = (T1 + 1) % 1440;
        } while (T1 != T2);
        cnt[3] += cnt[0];
        
        double result = 0;
        for (int i = 1; i <= 3; i++)
            result += mp[A][i-1] * (double)cnt[i];
        printf("%10s%6d%6d%6d%3c%8.2f\n", id, cnt[1], cnt[2], cnt[3], A, result);
    }
}