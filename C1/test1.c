#include <stdio.h>
int sum(int a, int b)
{
	return (a + b);
}

int main()
{
	int numA = 0;
	int numB = 0;
	int s = 0;
	
	printf("\nEnter num A: ");
	scanf("%d", &numB);
	
	printf("\nEnter numB: ");
	scanf("%d", &numB);
	
	s = sum(numA, numB);
	printf("Sum = %d", s);
	
	return 0;
}