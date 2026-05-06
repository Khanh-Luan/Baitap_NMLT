#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, m, x, y;
    cin >> n >> m >> x >> y;

    int a[105][105];
    int b[105][105];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= y; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 1; i <= n - x + 1; i++) {
        for (int j = 1; j <= m - y + 1; j++) {

            bool ok = true;

            for (int u = 1; u <= x; u++) {
                for (int v = 1; v <= y; v++) {
                    if (a[i + u - 1][j + v - 1] != b[u][v]) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) break;
            }

            if (ok) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
}
