#include <stdio.h>

int main()
{
	char names[5][50];
	int i = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("Enter name [%d]", i + 1);
		gets(names[i]);
	}
	
	printf("\n List of names: \n");
	
	for(i = 0; i < 5; i++)
	{
		printf("\n name [%d] %s", i + 1, names[i]);
	}
	
	for 
	
	return 0;
}