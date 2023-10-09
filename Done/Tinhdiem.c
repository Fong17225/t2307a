#include <stdio.h>
int main ()
{
	float D = 0;
	printf ("D:  ");
	scanf("%e", &D);
   	if (D >= 5 &D <= 6 )
	{
	   printf(" Pass"); 	
	}
	else	if (D > 6 &D <= 8)
	{
		printf("Good ");
	}
    else	if (D <=4)                                        
	{
	    printf ("Failed ");
    }
    else if (D > 10)
    {
    	printf ( "Error");
	}
	else
	{
		printf ("Excellent "); }
	return 0;
}