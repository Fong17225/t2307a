#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c;
	float x1, x2;
	float d;
	
	printf("a: ");
	scanf("%f", &a);
	
	printf("b: ");
	scanf("%f", &b);
	
	printf("c: ");
	scanf("%f", &c);
	
	if(a == 0)
	{
		x1 = -c/b;
		printf("Phuong trinh co 1 nghiem: %.2f ", x1);
	} 
	else
	{
		d = b * b - 4 * a * c;
	
		
		if(d > 0) 
		{
		 x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1: %.2f\n", x1);
        printf("x2: %.2f\n", x2);
		}
		else
	{			printf("phuong trinh vo nghiem");}
	}
	
	
	return 0;
}