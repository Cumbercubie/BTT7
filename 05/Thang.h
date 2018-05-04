#include <iostream>
#include "Hinh.h"
using namespace std;	

class BinhHanh:public Hinh
{
private:
	float fDayBe;
public:
		void Nhap();
		void VeHinh();
};