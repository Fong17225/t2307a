#include <stdio.h>
int main() {
    int num[10];
    int i;
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }
    printf("\nNumbers reverse:\n");
    for (i = 9; i >= 0; i--) {
        printf("%d\n", num[i]);
    }

    return 0;
}