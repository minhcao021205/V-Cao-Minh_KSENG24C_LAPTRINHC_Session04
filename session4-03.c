#include <stdio.h>

int main() {
    int number;

    
    printf("Nhap v�o mot so nguy�n: ");
    scanf("%d", &number);

    
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So %d chia het cho ca 3 v� 5.\n", number);
    } else if (number % 3 == 0) {
        printf("So %d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("So %d chia het cho 5.\n", number);
    } else {
        printf("So %d kh�ng chia het cho 3 hoac 5.\n", number);
    }

    return 0;
}
