#include <stdio.h>

int main() {
    int month;

    
    printf("Nhap v�o so th�ng (1-12): ");
    scanf("%d", &month);

    
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Th�ng %d c� 31 ng�y.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Th�ng %d c� 30 ng�y.\n", month);
            break;
        case 2:
            printf("Th�ng %d c� 28 hoac 29 ng�y (nam nhuan).\n", month);
            break;
        default:
            printf("S? th�ng %d kh�ng hop l?.\n", month);
            break;
    }

    return 0;
}
