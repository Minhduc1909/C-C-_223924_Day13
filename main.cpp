/*xay dung class dung de mieu ta doi tuong*/
#include<stdio.h>
#include"ThongTinCaNhan.h"
#include"HocSinh.h"

void function()
{
	ThongTinCaNhan A;
	A.ten;
}


int main()
{

	ThongTinCaNhan A;
	A.set_ten("nguyen van a");
	A.set_tuoi(18);
	A.set_gioiTinh(ThongTinCaNhan::nam);
	int tuoi_cua_a = A.get_tuoi();
	HocSinh B;
	A.set_ten("nguyen van a");
	return 0;
}
