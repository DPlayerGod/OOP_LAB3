#include "soao.h"

// Constructor mac dinh
SoPhuc::SoPhuc() : dThuc(0), dAo(0) {}

// Constructor voi tham so
SoPhuc::SoPhuc(int r, int i) : dThuc(r), dAo(i) {}

// Phep toan nhap tren so phuc
istream& operator >> (istream &is, SoPhuc &c) {
    cout << "Nhap phan thuc: ";
    is >> c.dThuc;
    cout << "Nhap phan ao: ";
    is >> c.dAo;

    return is;
}

// Phep toan xuat tren so phuc
ostream& operator << (ostream &os, const SoPhuc &c) {
    if (c.dAo >= 0) {
        os << c.dThuc << " + " << c.dAo << "i" << '\n';
    } else {
        os << c.dThuc << " - " << -c.dAo << "i" << '\n';
    }
    return os;
}

//Dinh nghia toan tu (+)
SoPhuc SoPhuc::operator + (const SoPhuc& other) const {
    return SoPhuc(dThuc + other.dThuc, dAo + other.dAo);
}

// Dinh nghia toan tu (-)
SoPhuc SoPhuc::operator - (const SoPhuc& other) const {
    return SoPhuc(dThuc - other.dThuc, dAo - other.dAo);
}

// Dinh nghia toan tu (*)
SoPhuc SoPhuc::operator * (const SoPhuc& other) const {
    int newdThuc = dThuc * other.dThuc - dAo * other.dAo;
    int newdAo = dThuc * other.dAo + dAo * other.dThuc;
    return SoPhuc(newdThuc, newdAo);
}

// Dinh nghia toan tu (/)
SoPhuc SoPhuc::operator / (const SoPhuc& other) const {
    int denominator = other.dThuc * other.dThuc + other.dAo * other.dAo;
    int newdThuc = (dThuc * other.dThuc + dAo * other.dAo) / denominator;
    int newdAo = (dAo * other.dThuc - dThuc * other.dAo) / denominator;
    return SoPhuc(newdThuc, newdAo);
}

// Dinh nghia toan tu so sanh (==)
bool SoPhuc::operator == (const SoPhuc& other) const {
    return (dThuc == other.dThuc && dAo == other.dAo);
}

// Dinh nghia toan tu so sanh (!=)
bool SoPhuc::operator != (const SoPhuc& other) const {
    return (dThuc != other.dThuc && dAo != other.dAo);
}