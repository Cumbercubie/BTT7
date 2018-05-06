#ifndef BINHHANH_H
#define BINHHANH_H
#include <iostream>
#include "Hinh.h"
using namespace std;

class BinhHanh:public Hinh
{
	public:
	    BinhHanh();
	    ~BinhHanh();
		void Nhap();
		void VeHinh();
};

#endif // BINHHANH_H
