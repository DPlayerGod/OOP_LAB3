#include "PhanSo.h"
#include <iostream>

using namespace std;

int main() {
    PhanSo ps1, ps2;

    cout << "Nhap phan so thu nhat:\n";
    cin >> ps1;
    cout << "Nhap phan so thu hai:\n";
    cin >> ps2;

    cout << "Phan so thu nhat: " << ps1 << '\n';
    cout << "Phan so thu hai: " << ps2 << '\n';

    cout << "Tong hai phan so: " << ps1 + ps2 << '\n';
    cout << "Hieu hai phan so: " << ps1 - ps2 << '\n';
    cout << "Tich hai phan so: " << ps1 * ps2 << '\n';

    if (ps2 != PhanSo(0, 1)) {
        cout << "Thuong hai phan so: " << ps1 / ps2 << '\n';
    } else {
        cout << "Khong the chia cho phan so 0.\n";
    }

    // So sanh hai phan so 
    if (ps1 == ps2) {
        cout << "Hai phan so bang nhau.\n";
    } else if (ps1 > ps2) {
        cout << "Phan so thu nhat lon hon phan so thu hai.\n";
    } else {
        cout << "Phan so thu nhat nho hon phan so thu hai.\n";
    }

    return 0;
}