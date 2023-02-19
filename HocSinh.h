#pragma once
#include"ThongTinCaNhan.h"
class diem
{
public:
	float dToan;
	float dVan;
	float dNgoaiNgu;
};
class HocSinh :public ThongTinCaNhan, public diem
{
public:
	HocSinh()
	{
		set_ten("nguyen van a");
		set_tuoi(18);
		diachi;
	}
//public:
//	enum gioi_tinh_e
//	{
//		nam, nu, khong_xac_dinh
//	};
//	char ten[32];
//	unsigned tuoi;
//	gioi_tinh_e gioi_tinh;
//	float dToan;
//	float dVan;
};
class GiaoVien :public ThongTinCaNhan
{
public:
	GiaoVien()
	{
		ten;
		tuoi;
		gioi_tinh;
		diachi;
	}
};