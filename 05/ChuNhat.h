#ifndef CHUNHAT_H
#define CHUNHAT_H
#include <iostream>
#include "Hinh.h"
using namespace std;

class ChuNhat:public Hinh
{
public:
		void Nhap();
		virtual void VeHinh();
};
#endif // CHUNHAT_H
