#include "soao.h"
#include <iostream>

using namespace std;

int main() {
    SoPhuc c1, c2;

    // Nhap hai so phuc
    cout << "Nhap so phuc thu nhat:\n";
    cin >> c1;

    cout << "Nhap so phuc thu hai:\n";
    cin >> c2;

    // Thuc hien cac phep toan
    SoPhuc tong = c1 + c2;
    SoPhuc tru = c1 - c2;
    SoPhuc nhan = c1 * c2;
    SoPhuc chia = c1 / c2;

    // Hien thi ket qua
    cout << "So phuc thu nhat: " << c1 << '\n';
    cout << "So phuc thu hai: " << c2 << '\n';
    cout << "Tong hai so phuc: " << tong << '\n';
    cout << "Hieu hai so phuc: " << tru << '\n';
    cout << "Tich hai so phuc: " << nhan << '\n';
    cout << "Thuong hai so phuc: " << chia << '\n';

    // So sanh hai so phuc su dung ==
    if (c1 == c2) {
        cout << "Hai so phuc bang nhau.\n";
    } else {
        cout << "Hai so phuc khong bang nhau.\n";
    }

    return 0;
}
