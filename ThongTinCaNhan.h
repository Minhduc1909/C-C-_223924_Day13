#pragma once
#include<string.h>
class ThongTinCaNhan
{
public:
	enum gioi_tinh_e
	{
		nam,nu,khong_xac_dinh
	};
private:
	char ten[32];
	unsigned char tuoi;
	gioi_tinh_e gioi_tinh;
protected://chi xai duoc trong class
	char diachi[64];
public:
	void set_ten(const char* ten)
	{
		memcpy(this-> ten,ten, strlen(ten) + 1);
	}
	void set_tuoi(unsigned char tuoi)
	{
		this ->tuoi = tuoi;
	}
	void set_gioiTinh(gioi_tinh_e gioi_tinh)
	{
		this->gioi_tinh = gioi_tinh;
	}
	char* get_ten()
	{
		return this->ten;
	}
	unsigned char get_tuoi()
	{
		return this->tuoi;
	}
	gioi_tinh_e get_gioiTinh()
	{
		return this->gioi_tinh;
	}
	friend void function();
	//friend int main();
	friend class HocSinh;
	friend class GiaoVien;
};