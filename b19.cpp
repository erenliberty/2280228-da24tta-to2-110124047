#include <stdio.h>
#include <math.h>

#define SIZE 100

void nhapMang(int a[], int n);
void xuatMang(int a[], int n);
int tongMang(int a[], int n);
int tongPTDUONG(int a[], int n);
int tongVTLE(int a[], int n);
int DemSoAm(int a[], int n);
int DemSoLe(int a[], int n);
int DemSoNgTo(int a[], int n);
int KiemTraSoNguyenTo(int n);  
int TimSoNgtoDauTien(int a[], int n); 
int SoDuongLe(int a[], int n);

int main()
{
    int A[SIZE];
    int n, kq;
    
    do
    {
        printf("\nNhap vao so phan tu: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    
    // Nhap mang
    nhapMang(A, n);
    
    // In mang
    printf("\nMang vua nhap la: ");
    xuatMang(A, n);
    
    // Tính t?ng các giá tr? trong m?ng
    kq = tongMang(A, n);
    printf("\nTong cac gia tri trong mang la: %d", kq);
    
    // Tính t?ng các ph?n t? duong
    kq = tongPTDUONG(A, n);
    printf("\nTong cac phan tu duong trong mang la: %d", kq);
    
    // Tính t?ng các ph?n t? có v? trí l?
    kq = tongVTLE(A, n);
    printf("\nTong cac phan tu co vi tri le trong mang la: %d", kq);
    
    // Ð?m s? ph?n t? âm
    kq = DemSoAm(A, n);
    printf("\nSo luong phan tu am trong mang la: %d", kq);
    
    // Ð?m s? l?
    kq = DemSoLe(A, n);
    printf("\nSo luong phan tu le trong mang la: %d", kq);
    
    // Ð?m s? nguyên t?
    kq = DemSoNgTo(A, n);
    printf("\nSo luong so nguyen to trong mang la: %d", kq);
    
    // Tìm s? nguyên t? d?u tiên
    kq = TimSoNgtoDauTien(A, n);
    if (kq == -1)
        printf("\nKhong co so nguyen to trong mang.");
    else
        printf("\nSo nguyen to dau tien trong mang la: %d", kq);
    
    // S? l? trong m?ng
    kq = SoDuongLe(A, n);
    printf("\nSo le trong mang la: %d", kq);

    return 0;
}

// Hàm tính s? l? trong m?ng
int SoDuongLe(int a[], int n)
{
    int SoLe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {  // Ki?m tra n?u là s? l?
            SoLe++;
        }
    }
    return SoLe;
}

// Hàm ki?m tra s? nguyên t?
int KiemTraSoNguyenTo(int n)
{
    if (n <= 1) return 0;  // S? nh? hon ho?c b?ng 1 không ph?i là s? nguyên t?
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // N?u chia h?t cho i, n không ph?i là s? nguyên t?
        }
    }
    return 1;  // N?u không chia h?t cho s? nào, n là s? nguyên t?
}

// Hàm d?m s? nguyên t? trong m?ng
int DemSoNgTo(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (KiemTraSoNguyenTo(a[i])) {
            dem++;  // N?u là s? nguyên t?, tang bi?n d?m
        }
    }
    return dem;  // Tr? v? s? lu?ng s? nguyên t? trong m?ng
}

// Hàm tìm s? nguyên t? d?u tiên trong m?ng
int TimSoNgtoDauTien(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        if (KiemTraSoNguyenTo(a[i])) {
            return a[i];  // Tr? v? s? nguyên t? d?u tiên tìm du?c
        }
    }
    return -1;  // N?u không có s? nguyên t? nào, tr? v? -1
}

// Hàm d?m s? l? trong m?ng
int DemSoLe(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            dem++;  // N?u ph?n t? là s? l?, tang bi?n d?m
        }
    }
    return dem;
}

// Hàm d?m s? âm trong m?ng
int DemSoAm(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            dem++;  // N?u ph?n t? là s? âm, tang bi?n d?m
        }
    }
    return dem;
}

// Hàm tính t?ng các ph?n t? có v? trí l? trong m?ng
int tongVTLE(int a[], int n)
{
    int tong = 0;
    for (int i = 1; i < n; i += 2) {
        tong += a[i];  // C?ng các ph?n t? có v? trí l?
    }
    return tong;
}

// Hàm tính t?ng các ph?n t? duong trong m?ng
int tongPTDUONG(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            tong += a[i];  // C?ng các ph?n t? duong
        }
    }
    return tong;
}

// Hàm tính t?ng các giá tr? trong m?ng
int tongMang(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];  // C?ng t?t c? các ph?n t? trong m?ng
    }
    return tong;
}

// Hàm xu?t m?ng
void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%8d", a[i]);  // In m?i ph?n t? trong m?ng
    }
    printf("\n");
}

// Hàm nh?p m?ng
void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("\nNhap gia tri tai vi tri %d: ", i);
        scanf("%d", &a[i]);  // Nh?p giá tr? vào m?ng
    }
}

