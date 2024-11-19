#include <stdio.h>
void InGiaTriChan(int n);
int main ()
{
	int n;
	do
	{
		printf("nhap gia tri n(1-100):");
		scanf("%d",&n);
	if(n<1||n>100){
		printf("Gia tri n khong hop le ");
	}
	}while(n<1||n>100);
	InGiaTriChan(n);
	
	return 0;
}
void InGiaTriChan(int n)
{
	int i = 1;
	do
	{
	if(i%5==0)
	{
		printf("%d\n",i);
	}	i++;
    }while(i<=n);

}


