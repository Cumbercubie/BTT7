#include <iostream>
#include "NVSX.h"
#include "NhanVien.h"
using namespace std;

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
	cout << "Tong luong la";
}

float NVSX::TinhLuong()
{
	return iLuongCB + iSoSP*5000;
}
