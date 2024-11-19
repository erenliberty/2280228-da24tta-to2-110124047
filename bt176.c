#include <stdio.h>
int main ()
{
	int n;
	do
	{
		printf("Nhap gia tri n(1-100):");
		scanf("%d",&n);
	if(n<1||n>100)
	{
		printf("n khong hop le ");
	}else
	{
		int i, Tong=0;
		for(i=1;i<=n;i++)
		if(i%2!=0)
		{
			Tong+=i;
		}printf("Tong cac so le tu 1 den %d la:%d", n, Tong);		
	}
	}while(n<1||n>100);
}
