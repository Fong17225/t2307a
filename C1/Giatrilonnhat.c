#include <stdio.h>

int main() {
    int a, b, c, d;
    int max = 0;

    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);
    printf("d: ");
    scanf("%d", &d);

    max = a;

    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    if(d > max) {
        max = d;
    }

    printf("Gia tri lon nhat la: %.1d", max);

    return 0;
}