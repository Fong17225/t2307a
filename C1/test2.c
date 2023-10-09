#include <stdio.h>
int main
{
int marks[10];

void menu()
{
	printf("\n1. Input mark");
	printf("\n2. Show all marks");
	printf("\n3. Find average");
	printf("\n4. Sort marks");
	printf("\n5. Find max mark");
	printf("\n6. Exit");
}

void inputMark()
{

	
	printf("Enter index: ");
	scanf("%d", &index);
	
	printf("Enter mark: ");
	scanf("%d", &mark);
	
	marks[index] = mark;
}

void showAll()
{
	int i = 0;
	for(i = 0; i < 10; i++)
	{
		printf(" %d ", marks[i]);
	}
}
void maxmark()

	printf("Max: ", max);
}


{
	int select = 0;
	do {
		menu();
		
		printf("\nEnter menu: ");
		scanf("%d", &select);
		
		switch(select)
		{
			case 1:
				inputMark();
				break;
			case 2:
				showAll();
				break;
			case 6:
				return 0;
				break;	
				
		}
		
		
	} while(1);
	
	return 0;
	
}