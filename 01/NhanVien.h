#include <iostream>
#include "MyDate.h"
using namespace std;
class NhanVien
{
private:
	string HoTen;
	MyDate NgaySinh;
protected:
	long  Luong;
public:
	friend istream& operator>>(istream&,NhanVien&);
	friend ostream& operator<<(ostream&,NhanVien&);
	virtual float TinhLuong();
};