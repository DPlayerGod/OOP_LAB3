#pragma once
#include<iostream>
using namespace std;

class PhanSo {
private:
    int iTu;   // Tu So
    int iMau;  // Mau So

public:
    // Constructor mac dinh va co tham so
    PhanSo();
    PhanSo(int Tu, int Mau);

    // Ham rut gon
    void RutGon();

    // Toan tu nhap, xuat
    friend istream& operator>>(istream &is, PhanSo &ps);
    friend ostream& operator<<(ostream &os, const PhanSo &ps);

    // DInh nghia cac toan tu
    PhanSo operator+(const PhanSo &other) const;
    PhanSo operator-(const PhanSo &other) const;
    PhanSo operator*(const PhanSo &other) const;
    PhanSo operator/(const PhanSo &other) const;

    bool operator==(const PhanSo &other) const;
    bool operator!=(const PhanSo &other) const;
    bool operator>=(const PhanSo &other) const;
    bool operator<=(const PhanSo &other) const;
    bool operator>(const PhanSo &other) const;
    bool operator<(const PhanSo &other) const;
};