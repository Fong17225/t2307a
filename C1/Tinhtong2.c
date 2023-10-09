#include <stdio.h>

int main() {
    int n;
    int a = 0;
    int num;
    printf("Nhap vao so luong phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &num);

        a += num;
    }

    printf("Tong cua cac so la: %d\n", a);

    return 0;
}