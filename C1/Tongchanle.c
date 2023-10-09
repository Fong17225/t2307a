#include <stdio.h>

#define SIZE 10

int main() {
    int n;
    int E = 0;
    int O = 0;
    int s;
    printf("Nhap vao so phan tu: ");
    scanf("%d", &s);
    for (int i = 0; i < s; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &n);

        if (n % 2 == 0) {
            E += n;
        } else {
            O += n;
        }
    }

    printf("Tong cac so chan: %d\n", E);
    printf("Tong cac so le: %d\n", O);

    return 0;
}