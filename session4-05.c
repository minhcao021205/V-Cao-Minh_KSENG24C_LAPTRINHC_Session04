#include <stdio.h>

int main() {
    int num1, num2, num3;

    
    printf("Nhap v�o so thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap v�o so thu hai: ");
    scanf("%d", &num2);
    printf("Nhap v�o so thu ba: ");
    scanf("%d", &num3);

    
    if ((num3 >= num1 && num3 <= num2) || (num3 >= num2 && num3 <= num1)) {
        printf("So thu ba (%d) nam trong khoang giua %d v� %d.\n", num3, num1, num2);
    } else {
        printf("So thu ba (%d) kh�ng nam trong khoang giua %d v� %d.\n", num3, num1, num2);
    }

    return 0;
}
