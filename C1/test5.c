#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float mark;
    char email[50];
};

void inputStudentInfo(struct Student s){
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Email: %s\n", s.email);
    printf("Student mark: %.2f\n", s.mark);
}

int main() {
    struct Student students[100];
    int studentCount = 0;
    int choice;
    do {
        printf("Menu:\n");
        printf("1. Add new student\n");
        printf("2. Display all students\n");
        printf("3. Find student by id\n");
        printf("4. Sort students by mark\n");
        printf("5. Edit student information\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if(scanf("%d", &choice) != 1){
        	printf("Invalid input. Please enter a number.\n");
        	while(getchar() != '\n');
        	continue;
		}

        switch (choice) {
            case 1: {
                struct Student newStudent;
                printf("Enter student id: ");
                gets("%d", &newStudent.id);
                printf("Enter student name: ");
                fflush(stdin);
                gets("%s", newStudent.name);
                printf("Enter student email: ");
                gets("%s", newStudent.email);
                printf("Enter student mark: ");
                gets("%f", &newStudent.mark);
                students[studentCount] = newStudent;
                studentCount++;
                break;
            }
            case 2:
                printf("List of students:\n");
                for (int i = 0; i < studentCount; i++) {
                    inputStudentInfo(students[i]);
                }
                break;
            case 3: {
                int searchID;
                printf("Enter student ID to search: ");
                scanf("%d", &searchID);
                int found = 0;
                for (int i = 0; i < studentCount; i++) {
                    if (students[i].id == searchID) {
                        printf("Student found:\n");
                        inputStudentInfo(students[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Student with ID %d not found.\n", searchID);
                }
                break;
            }
            case 4:
                for (int i = 0; i < studentCount; i++) {
                    for (int j = 0; j < studentCount - i - 1; j++) {
                        if (students[j].mark < students[j + 1].mark) {
                            struct Student temp = students[j];
                            students[j] = students[j + 1];
                            students[j + 1] = temp;
                        }
                    }
                }
                printf("Students sorted by mark.\n");
                break;
            case 5: {
                int editID;
                printf("Enter student ID to edit: ");
                scanf("%d", &editID);
                int found = 0;
                for (int i = 0; i < studentCount; i++) {
                    if (students[i].id == editID) {
                        printf("Editing student with ID %d:\n", editID);
                        printf("Enter new student name: ");
                        scanf("%s", students[i].name);
                        printf("Enter new student email: ");
                        scanf("%s", students[i].email);
                        printf("Enter new student mark: ");
                        scanf("%f", &students[i].mark);
                        printf("Student information updated.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Student with ID %d not found.\n", editID);
                }
                break;
            }
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 6);

    return 0;
}