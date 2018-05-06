#ifndef THANG_H
#define THANG_H
#include <iostream>
#include "Hinh.h"
using namespace std;

class Thang:public Hinh
{
private:
	float fDayBe;
public:
        Thang();
        ~Thang();
		void Nhap();
		void VeHinh();
};

#endif // THANG_H
