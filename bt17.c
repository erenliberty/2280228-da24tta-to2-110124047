#include <stdio.h>
void InGiaTri(int n);
int main ()
{
	int n;
	do
	{
		printf("nhap gia tri n(1-100):");
		scanf("%d",&n);
    if(n<1||n>100)
    {
    	printf("gia tri n khong hop le (1-100)");
    }
	}while(n<1||n>100);
    InGiaTri(n);
    return 0;
}
void InGiaTri(int n)
{
	
	int i = 1;
	do
	{
		printf("%d\n",i);
		i++;
	}while(i<=n);
	printf("\n");
}

