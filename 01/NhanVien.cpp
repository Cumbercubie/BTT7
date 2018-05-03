#include <iostream>
#include "NhanVien.h"
#include "MyDate.h"
using namespace std;

void NhapNgay(MyDate &date)
{
	cout << "Nhap ngay: ";
	cin >> date.iDay;
	cout << "Nhap thang: ";
	cin >> date.iMonth;
	cout << "Nhap nam: ";
	cin>> date.iYear;
}
void XuatNgay(MyDate date)
{
	cout << date.iDay << "/" << date.iMonth << "/" << date.iYear << endl;
}
void NhanVien::Nhap()
{
	cout << "Nhap ho va ten\n: ";
	cin >> HoTen;
	cout << "Nhap ngay thang nam sinh: \n";
	NhapNgay(NgaySinh);
}
void NhanVien::Xuat()
{
	cout << "Ho va ten: " << HoTen << endl;
    XuatNgay(NgaySinh);
}
istream& operator>>(istream& is,NhanVien& NV)
{
	NV.Nhap();
	return is;
}
ostream& operator<<(ostream& os,NhanVien& NV)
{
	NV.Xuat();
	return os;
}
