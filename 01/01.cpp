#include <iostream>
#include "NhanVien.h"
#include "NVVP.h"
#include "NVSX.h"
using namespace std;

int main()
{
	int m,n;
	NVVP *pVP = new NVVP[n];
	NVSX *pSX = new NVSX[m];
	NhanVien *pNVVP = &pVP;
	NhanVien *pNVSX = &pSX;
}
