#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Nhap vào so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap vào so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap vào so thu ba: ");
    scanf("%d", &num3);

    
    if ((num3 >= num1 && num3 <= num2) || (num3 >= num2 && num3 <= num1)) {
        printf("So thu ba (%d) nam trong khoang giua %d và %d.\n", num3, num1, num2);
    } else {
        printf("So thu ba (%d) không nam trong khoang giua %d và %d.\n", num3, num1, num2);
    }

    return 0;
}
