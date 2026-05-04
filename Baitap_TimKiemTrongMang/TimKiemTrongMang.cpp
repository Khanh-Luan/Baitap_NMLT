#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);

    int xuathien = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    if (a[i] == x) {
        xuathien++;
        }
     }
     
    if (xuathien > 0) cout << "YES";
    else cout << "NO";
    
    return 0;
}
