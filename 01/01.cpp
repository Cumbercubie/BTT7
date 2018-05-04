#include <iostream>
#include "nhanvien.h"
#include "NVSX.h"
#include "NVVP.h"
#include "cstdlib"
using namespace std;

int main()
{
    NhanVien *nv1 = new NVSX;
    nv1->Nhap();
    nv1->TinhLuong();
    nv1->Xuat();
    system("pause");
    return 0;

}
