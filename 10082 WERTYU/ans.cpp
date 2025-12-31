#include <iostream>
using namespace std;
int main() {
    string inp;
    while (getline(cin, inp)) {
        for (auto &c: inp) {
            if (c == ' ') cout << ' ';
            else if (c == '=') cout << '-';
            else if (c == '-') cout << '0';
            else if (c == '0') cout << '9';
            else if (c == '9') cout << '8';
            else if (c == '8') cout << '7';
            else if (c == '7') cout << '6';
            else if (c == '6') cout << '5';
            else if (c == '5') cout << '4';
            else if (c == '4') cout << '3';
            else if (c == '3') cout << '2';
            else if (c == '2') cout << '1';
            else if (c == '1') cout << '`';
            else if (c == '\\') cout << ']';
            else if (c == ']') cout << '[';
            else if (c == '[') cout << 'P';
            else if (c == 'P') cout << 'O';
            else if (c == 'O') cout << 'I';
            else if (c == 'I') cout << 'U';
            else if (c == 'U') cout << 'Y';
            else if (c == 'Y') cout << 'T';
            else if (c == 'T') cout << 'R';
            else if (c == 'R') cout << 'E';
            else if (c == 'E') cout << 'W';
            else if (c == 'W') cout << 'Q';
            else if (c == '\'') cout << ';';
            else if (c == ';') cout << 'L';
            else if (c == 'L') cout << 'K';
            else if (c == 'K') cout << 'J';
            else if (c == 'J') cout << 'H';
            else if (c == 'H') cout << 'G';
            else if (c == 'G') cout << 'F';
            else if (c == 'F') cout << 'D';
            else if (c == 'D') cout << 'S';
            else if (c == 'S') cout << 'A';
            else if (c == '/') cout << '.';
            else if (c == '.') cout << ',';
            else if (c == ',') cout << 'M';
            else if (c == 'M') cout << 'N';
            else if (c == 'N') cout << 'B';
            else if (c == 'B') cout << 'V';
            else if (c == 'V') cout << 'C';
            else if (c == 'C') cout << 'X';
            else if (c == 'X') cout << 'Z';
        }
        cout << endl;
    }
}