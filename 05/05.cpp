#include <iostream>
#include "Hinh.h"
#include "BinhHanh.h"
#include "Thang.h"
#include "ChuNhat.h"
#include "Vuong.h"
int shape;
	Hinh *pHinh;
	cout << "Nhap hinh muon ve: " << endl;
	cout << "1.Hinh thang" << endl;
	cout << "2.Hinh binh hanh" << endl;
	cout << "3.Hinh chu nhat" << endl;
	cout << "4.Hinh vuong" << endl;
	cin >> shape;
	switch(shape)
	{
		case 1:
		{
		  pHinh = new Thang;
		  pHinh->Nhap();
		  pHinh->Ve();
		}
		break;
		case 2:
		{
			pHinh = new BinhHanh;
			pHinh->Nhap();
			pHinh->Ve();
		}
		break;
		case 3:
		{
			pHinh = new ChuNhat;
			pHinh->Nhap();
			pHinh->Ve();
		}
		break;
		case 3:
		{
			pHinh = new Vuong;
			pHinh->Nhap();
			pHinh->Ve();
		}
		break;
	}