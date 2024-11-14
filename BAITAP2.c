#include <stdio.h>

int main ()
{
	//Khai bao bien
	int n, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	printf("in bang cuu chuong thu n(2-9):");
	scanf("%d",&n);
	//Kiem tra dieu kien
	if(n>=2&&n<=9)
	{
	 a1=n*1;
	 a2=n*2;
	 a3=n*3;
	 a4=n*4;
	 a5=n*5;
	 a6=n*6;
	 a7=n*7;
	 a8=n*8;
	 a9=n*9;
	 a10=n*10;
	printf("%d*1=%d\n%d*2=%d\n%d*3=%d\n%d*4=%d\n%d*5=%d\n%d*6=%d\n%d*7=%d\n%d*8=%d\n%d*9=%d\n%d*10=%d", n, a1, n, a2, n, a3, n, a4, n, a5, n, a6, n, a7, n, a8, n, a9, n, a10);
	}
	else
	{
	 printf("n khong hop le");
	}
return 0;
}
