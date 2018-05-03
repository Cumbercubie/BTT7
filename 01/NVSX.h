#ifndef NVSX_H
#define NVSX_H
#include <iostream>
#include "NhanVien.h"
using namespace std;
class NVSX:NhanVien
{
	long iLuongCB;
	int iSoSP;
public:
	static long TongLuong;
	void Nhap();
	void Xuat();
	float TinhLuong();
};
#endif // NVSX_H
