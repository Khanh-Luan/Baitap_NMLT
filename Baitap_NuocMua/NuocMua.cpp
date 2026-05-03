#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int h[1005];
    for (int i = 0; i < W; i++) {
        cin >> h[i];
    }

    int left[1005], right[1005];

    // max ben trai
    left[0] = h[0];
    for (int i = 1; i < W; i++) {
        left[i] = max(left[i - 1], h[i]);
    }

    // max ben phai
    right[W - 1] = h[W - 1];
    for (int i = W - 2; i >= 0; i--) {
        right[i] = max(right[i + 1], h[i]);
    }

    int ans = 0;

    for (int i = 0; i < W; i++) {
        int water = min(left[i], right[i]) - h[i];
        if (water > 0) ans += water;
    }

    cout << ans;
    return 0;
}
