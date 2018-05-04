#include <iostream>
#include "nhanvien.h"
#include "NVSX.h"
using namespace std;
NhanVien::NhanVien()
{
    Luong=0;
}
NhanVien::~NhanVien()
{
    delete this;
}
void NVSX::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so san pham ";
	cin >> iSoSP;
	cout << "Nhap luong can ban ";
	cin >> iLuongCB;

}

void NVSX::Xuat()
{
	NhanVien::Xuat();
	Luong = this->TinhLuong();
	cout << "Tong luong la: " << Luong;
}

float NVSX::TinhLuong()
{
	return iLuongCB + iSoSP*5000;
}
