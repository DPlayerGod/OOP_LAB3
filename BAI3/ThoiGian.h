#pragma once
#include <iostream>

using namespace std;

class ThoiGian {
private:
    int iGio;   // Gio
    int iPhut;  // Phut
    int iGiay;  // Giay

public:
    // Constructor mac dinh va co tham so
    ThoiGian();
    ThoiGian(int Gio, int Phut, int Giay);

    // Phuong thuc tinh tong so giay tu gio, phut va giay
    int TinhGiay() const;

    // Phuong thuc cap nhat lai gio, phut, giay tu tong so giay
    void TinhLaiGio(int Giay);

    // Dinh nghia toan tu nhap/xuat
    friend istream& operator >> (istream &is, ThoiGian &tg);
    friend ostream& operator << (ostream &os, const ThoiGian &tg);

    // Dinh nghia cac toan tu cong va tru voi giay
    ThoiGian operator + (int Giay) const;
    ThoiGian operator - (int Giay) const;

    // Dinh nghia cac toan tu cong va tru voi ThoiGian
    ThoiGian operator + (const ThoiGian &other) const;
    ThoiGian operator - (const ThoiGian &other) const;

    // Toan tu tang giam tien to va hau to
    ThoiGian& operator ++();    // Tien to
    ThoiGian operator ++(int);  // Hau to
    ThoiGian& operator --();    // Tien to
    ThoiGian operator --(int);  // Hau to

    // Dinh nghia cac toan tu so sanh
    bool operator == (const ThoiGian &other) const;
    bool operator != (const ThoiGian &other) const;
    bool operator >= (const ThoiGian &other) const;
    bool operator <= (const ThoiGian &other) const;
    bool operator > (const ThoiGian &other) const;
    bool operator < (const ThoiGian &other) const;
};