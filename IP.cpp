#include <iostream>
#include <string>
using namespace std;
int dec(string &s) {
    int res = 0;
    int two = 1;
    for (int i = (int)s.length() - 1; i >= 0; i--) {
        if (s[i] == '1')
            res += two;
        two *= 2;
    }
    return res;
}

int main() {
    string s = "11011111111111111111111111111111";
    string o[4];
    o[0] = s.substr(0, 8);
    o[1] = s.substr(8, 8);
    o[2] = s.substr(16, 8);
    o[3] = s.substr(24, string::npos);
    cout << dec(o[0]) << '.';
    cout << dec(o[1]) << '.';
    cout << dec(o[2]) << '.';
    cout << dec(o[3]) << '/';

    if (s.rfind("0",0)==0) {
        cout << 7 << '\n';
        cout << "class = " << 'A';
    } else if (s.rfind("10",0)==0) {
        cout << 14 << '\n';
        cout << "class = " << 'B';
    } else if (s.rfind("110",0)==0) {
        cout << 21 << '\n';
        cout << "class = " << 'C';
    } else if (s.rfind("1110",0)==0) {
        cout << 28 << '\n';
        cout << "class = " << 'D';
    } else {
        cout << 28 << '\n';
        cout << "class = " << 'E';
    }
    return 0;
}
