#include "ThoiGian.h"
#include <iostream>

using namespace std;

int main() {
    ThoiGian tg1(0, 45, 30); // Thoi gian thu nhat la 2 gio 45 phut 30 giay
    ThoiGian tg2(1, 20, 15); // Thoi gian thu hai la 1 gio 20 phut 15 giay

    cout << "Thoi gian thu nhat (tg1): " << tg1 << '\n';
    cout << "Thoi gian thu hai (tg2): " << tg2 << '\n';

    // Phep cong hai thoi gian
    ThoiGian tgTong = tg1 + tg2;
    cout << "Tong hai thoi gian (tg1 + tg2): " << tgTong << '\n';

    // Phep tru hai thoi gian
    ThoiGian tgHieu = tg1 - tg2;
    cout << "Hieu hai thoi gian (tg1 - tg2): " << tgHieu << '\n';

    // So sanh hai thoi gian
    if (tg1 == tg2) {
        cout << "Hai thoi gian bang nhau.\n";
    } else if (tg1 > tg2) {
        cout << "Thoi gian thu nhat lon hon thoi gian thu hai.\n";
    } else {
        cout << "Thoi gian thu nhat nho hon thoi gian thu hai.\n";
    }

    // Tang tien to va hau to
    cout << "Thoi gian thu nhat sau khi ++tg1 (tien to): " << ++tg1 << '\n';
    cout << "Thoi gian thu hai sau khi tg2++ (hau to): " << tg2++ << '\n';
    cout << "Thoi gian thu hai sau khi thuc hien hau to: " << tg2 << '\n';

    return 0;
}
