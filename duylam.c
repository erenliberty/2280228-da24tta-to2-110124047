#include <stdio.h>

int main ()
{
	//khai bao bien
	int a,b;
	//nhap gia tri
	printf("nhap hai so nguyen a va b: ");
	scanf("%d %d",&a, &b);
	//so sanh gia tri
if(a < b)
{
	printf("%d nho hon %d\n", a, b);
}
else
{
	printf("%d khong nho hon %d", a, b);
}
}
