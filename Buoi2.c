#include <stdio.h>
int main()
{
	//Khai bao bien
	int n, s=0, p=1;
	
	//Nhap gia tri bien
	printf("Nhap n = ");
	scanf("%d",&n);
	
	//Tinh tong cac so tu 1 den n
	for(int i=1;i<=n;i++)
	{
		s+=i;
	}
	printf("Tong S(n)= 1+2+3+...+n= %d \n",s);
	for(int i=1;i<=n;i++)
	{
		p*=i;
	}
	
	//Tinh tich cac so tu 1 den n
	printf("Tich P(n)= 1*2*3*...*n= %d",p);
	
	//baitap2
	//Khai bao bien
	int n2;
	
	//Nhap gia tri bien
	printf("\nNhap n = ");
	scanf("%d",&n2);
	
	//In bang cuu chuong n
	for(int i=1;i<=10;i++)
	{
		printf("%d * %d = %d \n",n2,i,n2*i);
	}
	
	//In bang cuu chuong tu 2 den 9
	for(int i=2;i<10;i++)
	{
		printf("Bang cuu chuong %d \n",i);
		for(int j=1;j<11;j++)
		{
			printf("%d * %d = %d \n",i,j,i*j);
		}
	}
	//baitap3
// Khai bao bien
    int n3, sum = 0; 
    
    // Nhap gia tri bien
    printf("Nhap n = ");
    scanf("%d", &n3);
    
    // Tinh tong cac chu so
    int temp = n3; 
    while (temp > 0) {
        int cs = temp % 10; 
        sum += cs;          
        temp = temp / 10;   
    }
    printf("Tong cac chu so trong so nguyen %d la: %d\n", n3, sum);
    return 0;
}
