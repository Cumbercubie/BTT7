#include <iosream>
#include "NVSX.h"
#include "NhanVien.h"
using namespace std;

void NVSX::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so san pham ";
	cin >> iSoSanPham;
	cout << "Nhap luong can ban ";
	cin >> iLuongCanBan;

}

void NVSX::Xuat()
{
	NhanVien::Xuat();
	cout << "Tong luong la";
}

float NVSX::TinhLuong()
{
	return iLuongCanBan+iSoSanPham*1.0*5000;
}