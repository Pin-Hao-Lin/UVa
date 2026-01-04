#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;
using ll = long long;
vector<ll> dp;
unordered_map<ll, ll> mp;
void init() {
    ll i = 1; mp[1] = 1;
    dp.push_back(1);
    while (dp.back() <= 2000000000) {
        mp[dp.back() * 2] = dp.back() * i++ + 1;
        dp.push_back(dp.back() * 2);
    }
}
ll Count(ll n) {
    if (!n) return 0;
    auto it = upper_bound(dp.begin(), dp.end(), n);
    it--;
    return mp[*it] + (n - *it)  + Count(n - *it);
}
int main() {
    init();

    ll a, b, cas = 0;
    while (cin >> a >> b) {
        if (!a && !b) break;
        ll result = Count(b);
        if (a) result -= Count(a-1);
        cout << "Case " << ++cas << ": " << result << endl;
    }
}