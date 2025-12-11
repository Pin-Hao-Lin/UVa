#include <iostream>
#include <vector>
#include <queue>
#include <map>
#define pii pair<int, int>
#define FF first
#define SS second
using namespace std;
int main() {
    string s;
    int id, prod, k;
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    map<int, int> mp;
    while (cin >> s && s != "#") {
        cin >> id >> prod;
        pq.push({prod, id});
        mp[id] = prod;
    }
    cin >> k;
    while (k--) {
        pii now = pq.top();
        pq.pop();
        cout << now.SS << endl;
        pq.push({now.FF + mp[now.SS], now.SS});
    }
}