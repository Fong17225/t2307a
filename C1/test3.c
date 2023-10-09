#include <stdio.h>

int main() {
    int choice;
    int numbers[100];
    int count = 0;
    int i, j, temp;
    float sum = 0;
    float average;

    while (1) {
        printf("------- Menu -------\n");
        printf("1. Nhập số\n");
        printf("2. Tìm số lớn nhất\n");
        printf("3. Tính trung bình\n");
        printf("4. Sắp xếp số\n");
        printf("5. Thoát\n");
        printf("---------------------\n");
        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số nguyên: ");
                scanf("%d", &numbers[count]);
                count++;
                break;

            case 2:
                if (count == 0) {
                    printf("Chưa có số nào được nhập.\n");
                } else {
                    int max = numbers[0];
                    for (i = 1; i < count; i++) {
                        if (numbers[i] > max) {
                            max = numbers[i];
                        }
                    }
                    printf("Số lớn nhất là: %d\n", max);
                }
                break;

            case 3:
                if (count == 0) {
                    printf("Chưa có số nào được nhập.\n");
                } else {
                    sum = 0;
                    for (i = 0; i < count; i++) {
                        sum += numbers[i];
                    }
                    average = sum / count;
                    printf("Trung bình của các số là: %.2f\n", average);
                }
                break;

            case 4:
                if (count == 0) {
                    printf("Chưa có số nào được nhập.\n");
                } else {
                    for (i = 0; i < count - 1; i++) {
                        for (j = i + 1; j < count; j++) {
                            if (numbers[i] > numbers[j]) {
                                temp = numbers[i];
                                numbers[i] = numbers[j];
                                numbers[j] = temp;
                            }
                        }
                    }
                    printf("Các số sau khi sắp xếp là:\n");
                    for (i = 0; i < count; i++) {
                        printf("%d ", numbers[i]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Kết thúc chương trình.\n");
                return 0;

            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
                break;
        }
    }

    return 0;
}