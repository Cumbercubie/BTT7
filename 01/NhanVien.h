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
		long  Luong;
	public:
		void Nhap();
        void Xuat();
		virtual float TinhLuong();
};
#endif // NVVP_H

