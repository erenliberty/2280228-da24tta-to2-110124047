#include <stdio.h>

int main ()
{
	int time;
	//nhap gio trong ngay (24 gio)
	printf("Nhap vao mot so nguyen xac dinh gio trong ngay(0-23):");
	scanf("%d",&time);
	if(time > 24 || time <0)
	 {
	 	printf("gio khong hop le");
	 }
	if(time > 18)
	{
		printf("Have a good night");
	}
	else
	{
		printf("Have a good day");
	}

	
}
