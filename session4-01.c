#include <stdio.h>

int main() {
    int number;

    
    printf("Nhap v�o mot so nguy�n: ");
    scanf("%d", &number);

    
    if (number > 0) {
        printf("So %d l� so duong.\n", number);
    } else if (number < 0) {
        printf("So %d l� so �m.\n", number);
    } else {
        printf("So ban nhap l� s? 0.\n");
    }

    return 0;
}
