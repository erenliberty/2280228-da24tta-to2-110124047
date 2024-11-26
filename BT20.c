#include <stdio.h>
#define SIZE 100
void nhapmangA(float A[],int n);
void xuatmangA(float A[],int n);
void TongA(float A[],int n);
void tbcongvtle(float A[],int n);
void phantuduong(float A[],int n);
void thututangdan(float A[],int n);
int main ()
{
	int n;
	float A[SIZE];
	do
	{
		printf("Nhap n phan tu:");
		scanf("%d",&n);
	}while(n<=0||n>100);

//Nhap mang
	int i;
    printf("Nhap %d phan tu cua mang:\n", n);
    for ( i = 0; i < n; i++) 
      	{
        printf("A[%d] = ", i);
        scanf("%f", &A[i]); 
        }

//Xuat mang
    printf("Mang A gom:%d phan tu",n);
        for(i=0;i<n;i++)
        {
        printf("\nA[%d]=%.0f", i, A[i]);
        }

//Tong A
{
	int TongA=0;
	for(i=0;i<=n;i++)
	{
	 TongA=A[i]+TongA; 
	}printf("\nTong A bang:%d",TongA);
	
}
//tong tb le
{
	float tongle=0;
    int solanle=0;
    float tbcongvtle=0;
		for(i=0;i<n;i++)
		{ 
		    if(i%2!=0) 
			{
		    solanle++;
			tongle=tongle+A[i];
			tbcongvtle= tongle/solanle;
		    }
       
	    }printf("\nTong trung binh le la %.2f",tbcongvtle);

}
//dem phan tu duong
{
int phantuduong = 0;
for(i=0;i<=n;i++)
{
	if(A[i]>0)
	{
      phantuduong++;
	}
}printf("\nSo phan tu co gia tri duong trong mang A la:%d",phantuduong);
}
}


