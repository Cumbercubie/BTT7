#include <iostream>
#incude "NhanVien.h"
using namespace std;
class NVSX:NhanVien
{
private:
	int iSoSanPham;
	int iLuongCanBan;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};