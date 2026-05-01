#include <iostream>

using namespace std;

int main () {
    int m,n;
    cin >> m >> n;

    char a[25][25];

    // Nhap ma tran
    for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++) {
        cin >> a[i][j];
       }
    }

    // Duyet va xu li
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (a[i][j] == '*') {
                cout << "*";
            }
            else {
                int tong = 0;

                //phia tren
                if (i > 0 && a[i - 1][j] == '*') tong++;

                //phia duoi
                if (i < m - 1 && a[i + 1][j] == '*') tong++;

                //phia ben trai
                if (j > 0 && a[i][j - 1] == '*') tong++;

                //phia ben phai
                if (j < n - 1 && a[i][j + 1] == '*') tong++;

                cout << tong;
            }
            if (j < n - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
