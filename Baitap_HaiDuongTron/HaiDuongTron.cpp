#include <bits/stdc++.h>

using namespace std;

int main () {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    if (d + min(r1, r2) < max(r1, r2)) cout << 1;
    else if (d + min(r1, r2) == max(r1, r2)) cout << 2;
    else if (abs(r1 - r2) < d && d < r1 + r2) cout << 3;
    else if (d == r1 + r2) cout << 4;
    else cout << 5;

    return 0;
}

