#include <stdio.h>

int main() {
    int n;
    int max = 0;
    int mark;
    printf("So luong phan tu: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        printf("So thu %d: ", i);
        scanf("%d", &mark);

        if (mark > max) {
            max = mark;
        }
    }

    printf("So lon nhat: %d\n", max);

    return 0;
}