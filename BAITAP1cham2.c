#include <stdio.h>
int main ()
{
	//Khai bao bien
	int n, i, s=1;
	printf("Nhap n(n>=1):");
	scanf("%d",&n);
	//Kiem tra dieu kien nhap vao
	if(n>=1)
	{
		for(i = 1; i<=n; i++)
		{
			s *= i;
		}
		printf("Tich P(n) la:%d",s);
	}
	else
	{
		printf("n khong hop le");
	}
	return 0;
}
