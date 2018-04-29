#include <iostream>
#include "NhanVien.h"
#include "MyDate.h"
using namespace std;

void Nhap(NhanVien &NV)
{
	cout << "Nhap ho va ten\n: ";
	cin >> NV.HoTen;
	cout << "Nhap ngay thang nam sinh: \n";
	cin >> NV.iDay >> NV.iMonth >> NV.iYear;
}
void Xuat(NhanVien& NV)
{
	cout << "Ho va ten: " << NV.HoTen << endl;
	cout << "Ngay sinh: " << NV.iDay << "/" << NV.iMonth << "/" << NV.iYear << endl;
	cout << "Tong Luong: " << NV.Luong;
}
istream& operator>>(istream& is,NhanVien& NV)
{
	Nhap(NV);
	return is;
}
ostream& operator<<(ostream& os,NhanVien& NV)
{
	Xuat(NV);
	return os;
}
