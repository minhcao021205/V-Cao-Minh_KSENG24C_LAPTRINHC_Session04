#include <stdio.h>

int main() {
    int month;

    
    printf("Nhap vào so tháng (1-12): ");
    scanf("%d", &month);

    
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Tháng %d có 31 ngày.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Tháng %d có 30 ngày.\n", month);
            break;
        case 2:
            printf("Tháng %d có 28 hoac 29 ngày (nam nhuan).\n", month);
            break;
        default:
            printf("S? tháng %d không hop l?.\n", month);
            break;
    }

    return 0;
}
