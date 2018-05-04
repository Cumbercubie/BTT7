#ifndef NVVP_H
#define NVVP_H
#include <iostream>
#include "MyDate.h"
using namespace std;
class NhanVien
{
    string HoTen;
    MyDate NgaySinh;
	protected:
		float  Luong;
	public:
	    NhanVien();
	    ~NhanVien();
		virtual void Nhap();
        virtual void Xuat();
		virtual float TinhLuong();
};
#endif // NVVP_H

