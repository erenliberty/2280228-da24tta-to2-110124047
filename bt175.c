#include <stdio.h>
int main ()
{
	int n;
	do
	{
		printf("nhap gia tri n de tinh tong (1-100):");
		scanf("%d",&n);
	if(n<1||n>100)
	{
		printf("Gia tri n khong hop le\n");
	}else
	{
	int	i, sum = 0;
		for(i=1;i<=n;i++)
		{
			sum+=i;
		}
	    printf("Tong cac so tu 1 den %d la:%d", n, sum);
	
	}

}while(n<1||n>100);
}
