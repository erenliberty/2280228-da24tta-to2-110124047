#include <stdio.h>

int main ()
{
	//Khai bao bien
	int n, i, s = 0;
	printf("Nhap n(n>0):");
	scanf("%d",&n);
	//Lenh lap
	if(n>0)
	{
		for(i = 1; i <= n; i++)
		{ 
		 s += i;
		}
		printf("Tong S = %d\n", s);
	}
	else
	{
		printf("n khong hop le");
	}
return 0;
}
