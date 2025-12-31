#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#define pii pair<int, int>
using namespace std;
int main() {
    string inp;
    bool first = true;
    while (getline(cin, inp)) {
        if (!first)  cout << endl;
        first = false;
        map<int, int> mp;
        for (auto &c: inp) mp[c]++;
        vector<pii> arr(mp.begin(), mp.end());
        sort(arr.begin(), arr.end(), [](const pii &a, const pii &b) {
            if (a.second != b.second) return a.second < b.second;
            return a.first > b.first;
        });
        for (auto &it: arr)
            cout << it.first << " " << it.second << endl;
    }
}