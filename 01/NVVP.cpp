#include <iostream>
#include "NVVP.h"
using namespace std;

void NVVP::Nhap()
{
    NhanVien::Nhap();
	cout << "Nhap so ngay lam viec\n";
	cin >> iSoNgayLV;
}
void NVVP::Xuat()
{
	NhanVien::Xuat();
	Luong = this->TinhLuong();
	cout << "Tong Luong: " << Luong;
}
istream& operator>>(istream& is,NVVP& NV)
{
	NV.Nhap();
	return is;
}
ostream& operator<<(ostream& os,NVVP& NV)
{
	NV.Xuat();
	return os;
}
float NVVP::TinhLuong()
{
	return iSoNgayLV*100000;
}
