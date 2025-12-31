#include <iostream>
#include <algorithm>
using namespace std;
class Data {
public:
    string id;
    int T, S;
    bool operator<(const Data obj) const {
        if (this->S * obj.T != obj.S * this->T)
            return this->S * obj.T > obj.S * this->T;
        return this->id < obj.id;
    }
};
int main() {
    int T, N;
    bool first = true;
    cin >> T;
    while (T-- && cin >> N) {
        if (!first) cout << endl;
        first = false;
        Data arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].T >> arr[i].S;
            arr[i].id = to_string(i+1);
        }
        sort(arr, arr+N);
        for (int i = 0; i < N; i++) {
            if(i) cout << " ";
            cout << arr[i].id;
        }
        cout << endl;
    }
}