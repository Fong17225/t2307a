#include <stdio.h>

int main() {
    int n;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    for (int b = 1; b <= n; b++) {
        for (int a = 1; a <= b; a++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}