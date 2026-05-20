#include <bits/stdc++.h>

using namespace std;

int main()
{
    FILE *f;

    // 1 - Tạo file
    // 2 - Mở file
    f = fopen("D:\\Dev-Cpp\\Baihocve_FILE.txt", "w");

    if (f == NULL)
    {
        cout << "\nLời tạo hoặc mở file";
        exit(1);
    }
    // 3 - Đọc hoặc ghi
    int n;
    cout << "\nNhap vao so n: ";
    cin >> n;

    fprintf(f, "Gia tri n la: %d\n", n);

    // 4 - Đóng file
    fclose(f);
    return 0;
}