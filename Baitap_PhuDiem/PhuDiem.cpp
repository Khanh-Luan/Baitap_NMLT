#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool mark[105][105] = {false};

    for (int k = 0; k < n; k++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++) {
            for (int j = y1; j <= y2; j++) {
                mark[i][j] = true;
            }
        }
    }

    int count = 0;
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            if (mark[i][j]) count++;
        }
    }

    cout << count << endl;
    return 0;
}

