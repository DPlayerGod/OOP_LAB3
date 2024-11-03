#include <iostream>
using namespace std;

class NgayThangNam {
private:
    int iNgay;   // Ngay
    int iThang;  // Thang
    int iNam;    // Nam

public:
    // Constructor mac dinh va co tham so
    NgayThangNam();
    NgayThangNam(int Nam, int Thang, int Ngay);

    // Ham kiem tra xem nam co phai nam nhuan hay khong
    bool NamNhuan(int nam) const;

    // Ham tinh so ngay trong thang
    int SoNgayTrongThang(int thang, int nam) const;

    // Ham chuan hoa ngay thang nam khi them / bot ngay
    void ChuanHoa();

    // Toan tu nhap / xuat
    friend istream& operator >> (istream &is, NgayThangNam &ntn);
    friend ostream& operator << (ostream &os, const NgayThangNam &ntn);

    // Dinh nghia cac toan tu +, -
    NgayThangNam operator + (int ngay) const;
    NgayThangNam operator - (int ngay) const;
    int operator - (const NgayThangNam &a) const;

    // Toan tu tang giam tien to va hau to
    NgayThangNam& operator++();    // Tien to
    NgayThangNam operator++(int);  // Hau to
    NgayThangNam& operator--();    // Tien to
    NgayThangNam operator--(int);  // Hau to

    // Dinh nghia cac toan tu so sanh
    bool operator == (const NgayThangNam &other) const;
    bool operator != (const NgayThangNam &other) const;
    bool operator >= (const NgayThangNam &other) const;
    bool operator <= (const NgayThangNam &other) const;
    bool operator > (const NgayThangNam &other) const;
    bool operator < (const NgayThangNam &other) const;
};