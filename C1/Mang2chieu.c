#include <stdio.h>

int main()
{
	int arr[3][5];
	int i, j = 0;
	int N = 0;
	 printf("N=");
	 scanf("%d",&N);


	for(i = 0; i < N; i++) 
	{
		for(j = 0; j+i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}	


	
	
	
	return 0;	
}