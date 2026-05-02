#include <bits/stdc++.h> // Thu vien nguoi Lao
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);  // Kich thuoc cua mang phu thuoc vao bien n nhap ban phim
    for (int i = 0; i < n; i++) cin >> a[i];

    int carry = 1;

    for (int i = n - 1; i >= 0; i--) {  // Duyet tu phai sang trai
        int sum = a[i] + carry;
        a[i] = sum % 10;
        carry = sum / 10;

        if (carry == 0) break;
    }

    if (carry > 0) cout << carry;

    for (int i = 0; i < n; i++) cout << a[i];

    return 0;
}

