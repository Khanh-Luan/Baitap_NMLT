#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    bool mark[256] = {false}; // danh dau cac ky tu chua bi cam

    for (int i = 0; i < t.length(); i++) {
        char c = t[i];
        mark[(unsigned char)c] = true;
    }

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (!mark[(unsigned char)c]) { // neu ky tu do == false thi in ra
            cout << c;                 // neu ky tu do == true thi bo qua
        }                               
    }

    cout << endl;
    return 0;
}

