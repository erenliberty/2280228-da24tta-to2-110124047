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
    
    // T�nh t?ng c�c gi� tr? trong m?ng
    kq = tongMang(A, n);
    printf("\nTong cac gia tri trong mang la: %d", kq);
    
    // T�nh t?ng c�c ph?n t? duong
    kq = tongPTDUONG(A, n);
    printf("\nTong cac phan tu duong trong mang la: %d", kq);
    
    // T�nh t?ng c�c ph?n t? c� v? tr� l?
    kq = tongVTLE(A, n);
    printf("\nTong cac phan tu co vi tri le trong mang la: %d", kq);
    
    // �?m s? ph?n t? �m
    kq = DemSoAm(A, n);
    printf("\nSo luong phan tu am trong mang la: %d", kq);
    
    // �?m s? l?
    kq = DemSoLe(A, n);
    printf("\nSo luong phan tu le trong mang la: %d", kq);
    
    // �?m s? nguy�n t?
    kq = DemSoNgTo(A, n);
    printf("\nSo luong so nguyen to trong mang la: %d", kq);
    
    // T�m s? nguy�n t? d?u ti�n
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

// H�m t�nh s? l? trong m?ng
int SoDuongLe(int a[], int n)
{
    int SoLe = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {  // Ki?m tra n?u l� s? l?
            SoLe++;
        }
    }
    return SoLe;
}

// H�m ki?m tra s? nguy�n t?
int KiemTraSoNguyenTo(int n)
{
    if (n <= 1) return 0;  // S? nh? hon ho?c b?ng 1 kh�ng ph?i l� s? nguy�n t?
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  // N?u chia h?t cho i, n kh�ng ph?i l� s? nguy�n t?
        }
    }
    return 1;  // N?u kh�ng chia h?t cho s? n�o, n l� s? nguy�n t?
}

// H�m d?m s? nguy�n t? trong m?ng
int DemSoNgTo(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (KiemTraSoNguyenTo(a[i])) {
            dem++;  // N?u l� s? nguy�n t?, tang bi?n d?m
        }
    }
    return dem;  // Tr? v? s? lu?ng s? nguy�n t? trong m?ng
}

// H�m t�m s? nguy�n t? d?u ti�n trong m?ng
int TimSoNgtoDauTien(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        if (KiemTraSoNguyenTo(a[i])) {
            return a[i];  // Tr? v? s? nguy�n t? d?u ti�n t�m du?c
        }
    }
    return -1;  // N?u kh�ng c� s? nguy�n t? n�o, tr? v? -1
}

// H�m d?m s? l? trong m?ng
int DemSoLe(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            dem++;  // N?u ph?n t? l� s? l?, tang bi?n d?m
        }
    }
    return dem;
}

// H�m d?m s? �m trong m?ng
int DemSoAm(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            dem++;  // N?u ph?n t? l� s? �m, tang bi?n d?m
        }
    }
    return dem;
}

// H�m t�nh t?ng c�c ph?n t? c� v? tr� l? trong m?ng
int tongVTLE(int a[], int n)
{
    int tong = 0;
    for (int i = 1; i < n; i += 2) {
        tong += a[i];  // C?ng c�c ph?n t? c� v? tr� l?
    }
    return tong;
}

// H�m t�nh t?ng c�c ph?n t? duong trong m?ng
int tongPTDUONG(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            tong += a[i];  // C?ng c�c ph?n t? duong
        }
    }
    return tong;
}

// H�m t�nh t?ng c�c gi� tr? trong m?ng
int tongMang(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += a[i];  // C?ng t?t c? c�c ph?n t? trong m?ng
    }
    return tong;
}

// H�m xu?t m?ng
void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%8d", a[i]);  // In m?i ph?n t? trong m?ng
    }
    printf("\n");
}

// H�m nh?p m?ng
void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("\nNhap gia tri tai vi tri %d: ", i);
        scanf("%d", &a[i]);  // Nh?p gi� tr? v�o m?ng
    }
}

