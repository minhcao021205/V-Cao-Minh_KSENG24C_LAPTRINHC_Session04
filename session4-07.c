#include <stdio.h>

int main() {
    int year;

    
    printf("Nhap v�o mot nam: ");
    scanf("%d", &year);

    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nam %d l� nam nhuan.\n", year);
    } else {
        printf("Nam %d kh�ng phai l� nam nhuan.\n", year);
    }

    return 0;
}
