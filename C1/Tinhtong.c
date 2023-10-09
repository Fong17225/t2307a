#include <stdio.h>

int main() {
    int num;
    int a = 0;

    for (int i = 0; i < 10; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &num);

        a += num;
    }

    printf("Tong cua 10 so la: %d\n", a);

    return 0;
}