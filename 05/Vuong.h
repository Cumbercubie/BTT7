#ifndef VUONG_H
#define VUONG_H
#include <iostream>
#include "Hinh.h"
using namespace std;

class Vuong:public Hinh
{
public:
        Vuong();
        ~Vuong();
		void Nhap();
		void VeHinh();
};
#endif // VUONG_H
