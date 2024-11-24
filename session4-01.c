#include <stdio.h>

int main() {
    int number;

    
    printf("Nhap vào mot so nguyên: ");
    scanf("%d", &number);

    
    if (number > 0) {
        printf("So %d là so duong.\n", number);
    } else if (number < 0) {
        printf("So %d là so âm.\n", number);
    } else {
        printf("So ban nhap là s? 0.\n");
    }

    return 0;
}
