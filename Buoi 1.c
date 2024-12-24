#include <stdio.h>
int main ()
{
	//bai tap 1
	printf("Ten:Lam Nguyen Nhat Duy\nLop:DA24TTA");
	
	//bai tap 2
	int a = 100;
	float b = 8.95;
	char c = 'C';
	printf("\nSo nguyen: %d\nSo thuc: %2f\nKy tu:%c",a,b,c);
	
	//bai tap 3
	int dayLon = 50, dayBe = 23, chieuCao = 30;
	float chuVi = 12.56, dtHinhThang = 0, dtHinhTron = 0, dtSanTruong = 0;
	const float PI = 3.1415;
	
    dtHinhThang = ((((dayLon + dayBe) * chieuCao))/2);
    float rad = chuVi/(2*PI);
    dtHinhTron = rad*rad*PI;
    dtSanTruong = dtHinhThang - dtHinhTron;
    printf("\nDien tich con lai cua san truong la:%.2f",dtSanTruong);
    
    //bai tap 4
    int soLuong = 0;
    float doanhThu = 0, donGia = 0, chiPhi = 0;
  
    printf("\nNhap so luong:");
    scanf("%d",&soLuong);
    printf("\nNhap don gia:");
    scanf("%f",&donGia);
    printf("\nNhap chi phi:");
    scanf("%f",&chiPhi);
    doanhThu = ((soLuong * donGia) - chiPhi);
    printf("\nDoanh thu cua hang la:%.2f",doanhThu);
    //bai tap 5
   int i = 0, j, k = 7, m = 5, n;

    j = m + 2;
    m += 2; 
    printf("j = %d\n", j); 

    j = k++ > 7; 
    printf("j = %d\n", j); 

   
    j = i == 0 + k; 
    printf("j = %d\n", j); 

    n = !i > k % 2; 
    printf("n = %d\n", n); 
    //bai tap 6
   
  
}

