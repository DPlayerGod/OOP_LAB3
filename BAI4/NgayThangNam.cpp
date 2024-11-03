#include "NgayThangNam.h"
#include <iostream>

using namespace std;

// Constructor mac dinh
NgayThangNam::NgayThangNam() : iNgay(03), iThang(11), iNam(2024) {}

// Constructor co tham so
NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay) : iNgay(Ngay), iThang(Thang), iNam(Nam) {
    ChuanHoa();
}

// Kiem tra nam nhuan
bool NgayThangNam::NamNhuan(int nam) const {
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

// Tinh so ngay trong thang
int NgayThangNam::SoNgayTrongThang(int thang, int nam) const {
    if (thang == 2) return NamNhuan(nam) ? 29 : 28;
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) return 30;
    return 31;
}

// Chuan hoa ngay thang nam
void NgayThangNam::ChuanHoa() {
    while (iNgay > SoNgayTrongThang(iThang, iNam)) {
        iNgay -= SoNgayTrongThang(iThang, iNam);
        if (++iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
    while (iNgay < 1) {
        if (--iThang < 1) {
            iThang = 12;
            iNam--;
        }
        iNgay += SoNgayTrongThang(iThang, iNam);
    }
}

// Toan tu nhap
istream& operator >> (istream &is, NgayThangNam &ntn) {
    cout << "Nhap ngay: ";
    is >> ntn.iNgay;
    cout << "Nhap thang: ";
    is >> ntn.iThang;
    cout << "Nhap nam: ";
    is >> ntn.iNam;
    ntn.ChuanHoa();
    return is;
}

// Toan tu xuat
ostream& operator<<(ostream &os, const NgayThangNam &ntn) {
    os << ntn.iNgay << "/" << ntn.iThang << "/" << ntn.iNam;
    return os;
}

// Toan tu + voi so ngay
NgayThangNam NgayThangNam::operator+(int ngay) const {
    NgayThangNam result(iNam, iThang, iNgay + ngay);
    result.ChuanHoa();
    return result;
}

// Toan tu - voi so ngay
NgayThangNam NgayThangNam::operator-(int ngay) const {
    NgayThangNam result(iNam, iThang, iNgay - ngay);
    result.ChuanHoa();
    return result;
}

// Toan tu - giua hai ngay de tinh so ngay chenh lech
int NgayThangNam::operator-(const NgayThangNam &a) const {
    int ngay1 = iNam * 365 + iNgay;
    int ngay2 = a.iNam * 365 + a.iNgay;
    for (int i = 1; i < iThang; ++i) ngay1 += SoNgayTrongThang(i, iNam);
    for (int i = 1; i < a.iThang; ++i) ngay2 += SoNgayTrongThang(i, a.iNam);
    return abs(ngay1 - ngay2);
}

// Toan tu tang tien to
NgayThangNam& NgayThangNam::operator++() {
    *this = *this + 1;
    return *this;
}

// Toan tu tang hau to
NgayThangNam NgayThangNam::operator++(int) {
    NgayThangNam temp = *this;
    *this = *this + 1;
    return temp;
}

// Toan tu giam tien to
NgayThangNam& NgayThangNam::operator--() {
    *this = *this - 1;
    return *this;
}

// Toan tu giam hau to
NgayThangNam NgayThangNam::operator--(int) {
    NgayThangNam temp = *this;
    *this = *this - 1;
    return temp;
}

// Cac toan tu so sanh
bool NgayThangNam::operator == (const NgayThangNam &other) const {
    return iNgay == other.iNgay && iThang == other.iThang && iNam == other.iNam;
}

bool NgayThangNam::operator != (const NgayThangNam &other) const {
    return !(*this == other);
}

bool NgayThangNam::operator >= (const NgayThangNam &other) const {
    return (*this > other) || (*this == other);
}

bool NgayThangNam::operator <= (const NgayThangNam &other) const {
    return (*this < other) || (*this == other);
}

bool NgayThangNam::operator > (const NgayThangNam &other) const {
    if (iNam > other.iNam) return true;
    if (iNam == other.iNam && iThang > other.iThang) return true;
    if (iNam == other.iNam && iThang == other.iThang && iNgay > other.iNgay) return true;
    return false;
}

bool NgayThangNam::operator < (const NgayThangNam &other) const {
    return !(*this >= other);
}