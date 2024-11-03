#pragma once 
#include<bits/stdc++.h>
using namespace std;

class SoPhuc {
private:
    int dThuc;  // Phan thuc
    int dAo;  // Phan ao

public:
     // Constructor mac dinh
    SoPhuc();

    // Constructor với tham so
    SoPhuc(int r, int i);
    friend istream& operator >> (istream &is, SoPhuc &c);

    // Phep toan xuat tren so phuc
    friend ostream& operator << (ostream &os, const SoPhuc &c);

    //Dinh nghia toan tu (+)
    SoPhuc operator + (const SoPhuc& other) const;

    // Dinh nghia toan tu (-)
    SoPhuc operator - (const SoPhuc& other) const;

    // Dinh nghia toan tu (*)
    SoPhuc operator * (const SoPhuc& other) const;

    // Dinh nghia toan tu (/)
    SoPhuc operator / (const SoPhuc& other) const;

    // Dinh nghia toan tu so sanh (==)
    bool operator == (const SoPhuc& other) const;

    // Dinh nghia toan tu so sanh (!=)
    bool operator != (const SoPhuc& other) const;
};
