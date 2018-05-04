#ifndef NVSX_H
#define NVSX_H
#include <iostream>
#include "NhanVien.h"
using namespace std;
class NVSX:public NhanVien
{
	long iLuongCB;
	int iSoSP;
public:
	void Nhap();
	void Xuat();
	float TinhLuong();
};
#endif // NVSX_H
