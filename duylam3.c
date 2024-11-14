#include <stdio.h>

int main ()
{
	//Khai bao bien
	int namsinh;
	float diemxt;
	char hoten[50], lop[10], mssv[10];
	
	//Nhap du lieu
	printf("Nam sinh:");
	scanf("%d", &namsinh);
	
	printf("Ho va ten:");
	scanf("%d", hoten);
	
	printf("lop:");
	fflush(stdin);
	scanf("%s", lop);
	
	printf("Mssv:");
	fflush(stdin);
	scanf("%s", &mssv);
	
	printf("Diem xet tuyen:");
	scanf("%d", &diemxt);
	
	//Xuat du lieu
	printf("%d %d %s %s %d",namsinh,hoten,lop,mssv,diemxt);
	return 0;

	
}
