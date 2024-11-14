#include <stdio.h>

int main() {
    int n, sum = 0;

    // Nhap so nguyen
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    n = (n < 0) ? -n : n;

    // Tinh tong cac chu so
    while (n != 0) 
    {
        sum += n % 10;  
        n /= 10;        
    }
    // In ket qua
    printf("Tong cac chu so cua so nguyen la: %d\n", sum);

    return 0;}

