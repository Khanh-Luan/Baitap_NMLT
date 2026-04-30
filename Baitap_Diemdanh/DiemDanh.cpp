#include <iostream>

using namespace std;

int main () {
    bool diemdanh[31] = {false};

    for (int i = 0; i < 28; i++) {
        int x;
        cin >> x;
        diemdanh[x] = true;
    } 

    int vang = 0;
    for (int i = 1; i <= 30; i++) {
        if (!diemdanh[i]) {
            cout << i;
            vang++;
            if (vang < 2) cout << " ";
        }
    }

    return 0;
}
