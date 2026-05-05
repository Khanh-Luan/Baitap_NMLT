#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    int a[105][105];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            if ((i - j == x - y) || (i + j == x + y)) {   // Duong cheo chinh: i - j == x - y;
                sum += a[i][j];                           // Duong cheo phu: i + j == x + y;
            }

        }
    }

    cout << sum;

    return 0;
}
