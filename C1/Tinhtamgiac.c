#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap vao ba so a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    if(a + b > c && a + c > b && b + c > a) {
        printf("Day la do dai cac canh cua mot tam giac.");
    }
    else {
        printf("Day khong phai la do dai cac canh cua mot tam giac.");
    }

    return 0;
}