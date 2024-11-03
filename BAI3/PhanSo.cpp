#include "PhanSo.h"
#include <bits/stdc++.h>
using namespace std;

// Constructor mac dinh
PhanSo::PhanSo() : iTu(0), iMau(1) {}

// Constructor co tham so
PhanSo::PhanSo(int Tu, int Mau) : iTu(Tu), iMau(Mau) {
    if (iMau == 0) {
        cout << "Mau so khong the la 0. Dat mau so thanh 1.\n";
        iMau = 1;
    }
    RutGon();
}

// Ham rut gon phan so
void PhanSo::RutGon() {
    int gcd = __gcd(iTu, iMau);
    iTu /= gcd;
    iMau /= gcd;
    if (iMau < 0) { 
        iTu = -iTu;
        iMau = -iMau;
    }
}

// Toan tu nhap
istream& operator>>(istream &is, PhanSo &ps) {
    cout << "Nhap tu so: ";
    is >> ps.iTu;
    cout << "Nhap mau so: ";
    is >> ps.iMau;
    if (ps.iMau == 0) {
        cout << "Mau so khong the la 0. Dat mau so thanh 1.\n";
        ps.iMau = 1;
    }
    ps.RutGon();
    return is;
}

// Toan tu xuat
ostream& operator<<(ostream &os, const PhanSo &ps) {
    if (ps.iMau == 1) {
        os << ps.iTu;
    } else {
        os << ps.iTu << "/" << ps.iMau;
    }
    return os;
}

// Dinh nghia cac toan tu +, -, *, /
PhanSo PhanSo::operator+(const PhanSo &other) const {
    PhanSo result(iTu * other.iMau + other.iTu * iMau, iMau * other.iMau);
    result.RutGon(); 
    return result;
}

PhanSo PhanSo::operator-(const PhanSo &other) const {
    PhanSo result(iTu * other.iMau - other.iTu * iMau, iMau * other.iMau);
    result.RutGon(); 
    return result;
}

PhanSo PhanSo::operator*(const PhanSo &other) const {
    PhanSo result(iTu * other.iTu, iMau * other.iMau);
    result.RutGon(); 
    return result;
}

PhanSo PhanSo::operator/(const PhanSo &other) const {
    PhanSo result(iTu * other.iMau, iMau * other.iTu);
    result.RutGon(); 
    return result;
}

//Dinh nghia cac toan tu so sanh
bool PhanSo::operator==(const PhanSo &other) const {
    return iTu * other.iMau == other.iTu * iMau;
}

bool PhanSo::operator!=(const PhanSo &other) const {
    return !(*this == other);
}

bool PhanSo::operator>=(const PhanSo &other) const {
    return iTu * other.iMau >= other.iTu * iMau;
}

bool PhanSo::operator<=(const PhanSo &other) const {
    return iTu * other.iMau <= other.iTu * iMau;
}

bool PhanSo::operator>(const PhanSo &other) const {
    return iTu * other.iMau > other.iTu * iMau;
}

bool PhanSo::operator<(const PhanSo &other) const {
    return iTu * other.iMau < other.iTu * iMau;
}
