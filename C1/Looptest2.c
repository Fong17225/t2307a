#include <stdio.h>

int main() {
    int n;
    int max;
    int mark;
    for (int i = 1; i <= 10; i++) {

        printf("So thu %d: ", i);
        scanf("%d", &mark);

        if (mark > i) {
            i = mark;
        }
    }

    printf("So lon nhat: %d\n", max);

    return 0;
}