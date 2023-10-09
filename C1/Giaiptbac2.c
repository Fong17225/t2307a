#include <stdio.h>


int main() {
    float a, b, c, delta, x1, x2;

    printf("a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1: %.2f\n", x1);
        printf("x2: %.2f\n", x2);
    }
    else if (delta == 0) {
        x1 = x2 = -b / (2 * a);
        printf("Phương trình có nghiệm kép:\n");
        printf("Nghiệm: %.2f\n", x1);
    }
    else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-delta) / (2 * a);
        printf("Phuong trinh co 2 nghiem ao:\n");
        printf("x1: %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("x2: %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    return 0;
}