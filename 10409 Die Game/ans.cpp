#include <iostream>
using namespace std;
void roll(int &a, int &b, int &c, int &d) {
    int tmp = a;
    a = b;
    b = c;
    c = d;
    d = tmp;
}
int main() {
    int N;
    string cmd;
    while (cin >> N && N) {
        int t = 1, b = 6, n = 2, s = 5, w = 3, e = 4, tmp;
        while (N-- && cin >> cmd) {
            if (cmd[0] == 'n') roll(t, s, b, n);
            else if (cmd[0] == 's') roll(t, n, b, s);
            else if (cmd[0] == 'w') roll(t, e, b, w);
            else if (cmd[0] == 'e') roll(t, w, b, e);
        }
        cout << t << endl;
    }
}