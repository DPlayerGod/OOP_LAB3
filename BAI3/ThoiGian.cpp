#include "ThoiGian.h"
#include <iostream>

using namespace std;

// Constructor mac dinh
ThoiGian::ThoiGian() : iGio(0), iPhut(0), iGiay(0) {}

// Constructor co tham so
ThoiGian::ThoiGian(int Gio, int Phut, int Giay) : iGio(Gio), iPhut(Phut), iGiay(Giay) {
    TinhLaiGio(TinhGiay()); // Dam bao thoi gian hop le
}

// Tinh tong so giay
int ThoiGian::TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

// Cap nhat lai gio, phut, giay tu tong so giay
void ThoiGian::TinhLaiGio(int Giay) {
    (Giay += 86400) %= 86400; // 86400 la so giay cua 1 ngay ~ 24h 
    iGio = Giay / 3600;
    iPhut = (Giay % 3600) / 60;
    iGiay = Giay % 60;
}

// Toan tu nhap
istream& operator >> (istream &is, ThoiGian &tg) {
    cout << "Nhap gio: ";
    is >> tg.iGio;
    cout << "Nhap phut: ";
    is >> tg.iPhut;
    cout << "Nhap giay: ";
    is >> tg.iGiay;
    tg.TinhLaiGio(tg.TinhGiay());
    return is;
}

// Toan tu xuat
ostream& operator << (ostream &os, const ThoiGian &tg) {
    os << tg.iGio << "h:" << tg.iPhut << "m:" << tg.iGiay << "s";
    return os;
}

// Toan tu + voi giay
ThoiGian ThoiGian::operator + (int Giay) const {
    ThoiGian result;
    result.TinhLaiGio(TinhGiay() + Giay);
    return result;
}

// Toan tu - voi giay
ThoiGian ThoiGian::operator - (int Giay) const {
    ThoiGian result;
    result.TinhLaiGio(TinhGiay() - Giay);
    return result;
}

// Toan tu + voi ThoiGian
ThoiGian ThoiGian::operator + (const ThoiGian &other) const {
    return *this + other.TinhGiay();
}

// Toan tu - voi ThoiGian
ThoiGian ThoiGian::operator - (const ThoiGian &other) const {
    return *this - other.TinhGiay();
}

// Toan tu tang tien to
ThoiGian& ThoiGian::operator++() {
    *this = *this + 1;
    return *this;
}

// Toan tu tang hau to
ThoiGian ThoiGian::operator++(int) {
    ThoiGian temp = *this;
    *this = *this + 1;
    return temp;
}

// Toan tu giam tien to
ThoiGian& ThoiGian::operator--() {
    *this = *this - 1;
    return *this;
}

// Toan tu giam hau to
ThoiGian ThoiGian::operator--(int) {
    ThoiGian temp = *this;
    *this = *this - 1;
    return temp;
}

// Cac toan tu so sanh
bool ThoiGian::operator == (const ThoiGian &other) const {
    return TinhGiay() == other.TinhGiay();
}

bool ThoiGian::operator != (const ThoiGian &other) const {
    return !(*this == other);
}

bool ThoiGian::operator >= (const ThoiGian &other) const {
    return TinhGiay() >= other.TinhGiay();
}

bool ThoiGian::operator <= (const ThoiGian &other) const {
    return TinhGiay() <= other.TinhGiay();
}

bool ThoiGian::operator > (const ThoiGian &other) const {
    return TinhGiay() > other.TinhGiay();
}

bool ThoiGian::operator < (const ThoiGian &other) const {
    return TinhGiay() < other.TinhGiay();
}