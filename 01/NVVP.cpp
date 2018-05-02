#include <iostream>
#include "NVVP.h"
using namespace std;

void Nhap(NVVP &NV)
{
	cout << "Nhap ho va ten\n: ";
	cin >> NV.HoTen;
	cout << "Nhap ngay thang nam sinh: \n";
	cin >> NV.iDay >> NV.iMonth >> NV.iYear;
	cout << "Nhap so ngay lam viec\n";
	cin >> NV.iSoNgayLamViec;
}
void Xuat(NVVP& NV)
{
	cout << "Ho va ten: " << NV.HoTen << endl;
	cout << "Ngay sinh: " << NV.iDay << "/" << NV.iMonth << "/" << NV.iYear << endl;
	cout << "Tong Luong: " << NV.Luong;
}
istream& operator>>(istream& is,NVVP& NV)
{
	Nhap(NV);
	return is;
}
ostream& operator<<(ostream& os,NVVP& NV)
{
	Xuat(NV);
	return os;
}
float TinhLuong()
{
	return iSoNgayLamViec*100000;
}
