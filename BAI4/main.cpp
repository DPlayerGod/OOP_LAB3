#include "NgayThangNam.h"
#include <iostream>

using namespace std;

int main() {
    NgayThangNam ntn1(2023, 12, 15); // Khoi tao ngay thang nam thu nhat
    NgayThangNam ntn2(2022, 6, 5);   // Khoi tao ngay thang nam thu hai
    cin >> ntn2;

    cout << "Ngay thang nam thu nhat: " << ntn1 << '\n';
    cout << "Ngay thang nam thu hai: " << ntn2 << '\n';

    // Phep cong va tru voi so ngay
    cout << "Ngay thang nam thu nhat + 30 ngay: " << ntn1 + 30 << '\n';
    cout << "Ngay thang nam thu nhat - 45 ngay: " << ntn1 - 45 << '\n';

    // Tinh khoang cach ngay
    cout << "Khoang cach giua ntn1 va ntn2: " << ntn1 - ntn2 << " ngay\n";

    // Toan tu tang giam
    cout << "Ngay thang nam thu nhat sau khi ++: " << ++ntn1 << '\n';
    cout << "Ngay thang nam thu hai sau khi --: " << --ntn2 << '\n';

    // So sanh
    if (ntn1 == ntn2) {
        cout << "Hai ngay bang nhau.\n";
    } else if (ntn1 > ntn2) {
        cout << "Ngay thang nam thu nhat lon hon ngay thang nam thu hai.\n";
    } if (ntn1 < ntn2) {
        cout << "Ngay thang nam thu nhat nho hon ngay thang nam thu hai.\n";
    }
    else {
        cout << "Ngay thang nam thu nhat bang ngay thang nam thu hai.\n";
    }

    return 0;
}