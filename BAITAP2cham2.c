#include <stdio.h>

int main() {
    int i, n;

    //Vong lap in ban cuu chuong
    for (n = 2; n <= 9; n++) {
        printf("Bang cuu chuong %d:\n", n); 
        for (i = 1; i <= 9; i++) {
            printf("%d * %d = %d\n", n, i, n * i); 
        }
        printf("\n"); 
    }

    return 0;
}

