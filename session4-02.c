#include <stdio.h>

int main() {
    int number;

    
    printf("Nhap v�o mot so nguy�n: ");
    scanf("%d", &number);

    
    if (number % 2 == 0) {
        printf("So %d l� so chan.\n", number);
    } else {
        printf("So %d l� so le.\n", number);
    }

    return 0;
}
