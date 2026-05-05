#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector< vector<int> > a(n, vector<int>(m));

    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    int num = 1;

    while (top <= bottom && left <= right) {
        // Di tu trai sang phai
        for (int j = left; j <= right; j++) {
            a[top][j] = num++;
        }
        top++;

        // Di tu tren xuong duoi
        for (int i = top; i <= bottom; i++) {
            a[i][right] = num++;
        }
        right--;

        // Di tu phai sang trai
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                a[bottom][j] = num++;
            }
            bottom--;
        }

        // Di tu duoi len tren
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = num++;
            }
            left++;
        }
    }

    // In ket qua
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

