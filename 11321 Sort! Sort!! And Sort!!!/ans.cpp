#include <iostream>
#include <algorithm>
using namespace std;
class Data {
public:
    int value, M;
    bool operator<(const Data &obj) const {
        if (value % M != obj.value % M)
            return value % M < obj.value % M;
        if ((value & 1) != (obj.value & 1))
            return value & 1;
        if (value & 1)
            return value > obj.value;
        return value < obj.value;
    }
};
int main() {
    int N, M;
    while (cin >> N >> M) {
        cout << N << " " << M << endl;
        if (!N && !M) break;
        Data arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i].value;
            arr[i].M = M;
        }
        stable_sort(arr, arr+N);
        
        for (int i = 0; i < N; i++)
            cout << arr[i].value << endl;
    }
}