#include <stdio.h>
float num1;
float num2;
float num;
void menu()
{
	printf("\n1. Add number");
	printf("\n2. Calculate Sum");
	printf("\n3. Calculate Substraction");
	printf("\n4. Calculate Multiplications");
	printf("\n5. Calculate Divisions");
	printf("\n6. Exit");
}


void add()
{


	printf("Enter number 1: ");
	scanf("%f", &num1);
	
	printf("Enter number 2: ");
	scanf("%f", &num2);
	
}


void sum()
{

	
	num = num1 + num2;	
	printf(" Sum: %f\n", num);
}


void sub()
{
   num = num1 - num2;
   printf("Subtraction: %f\n", num);
}

void multi()
{
 	num = num1 * num2;
	printf("Multiplication: %f\n", num);
}


void division()
{
   num = num1 / num2;
   printf("Division: %f\n", num);
}
int main()
{
	int select = 0;
	do
	{
		menu();
		printf("\nEnter menu: ");
		scanf("%d", &select);
		
		switch(select)
		{
			case 1:
				add();
				break;
			case 2:
				sum();
				break;
			case 3:
				sub();
				break;
			case 4:
				multi();
				break;
			case 5:
				division();
				break;
			case 6:
				return 0;
				break;
		}
	}  while(1);
	return 0; 
}