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
		virtual Nhap();
		virtual Xuat();
		virtual float TinhLuong();
	};