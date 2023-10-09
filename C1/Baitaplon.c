#include <stdio.h>
#include <string.h>

struct Phone 
 {
 	int id;
 	char name[30];
 	char cpu[30];
 	int ram;
    int value; 
 };
struct Phone ch[80];
int index = 0;

void menu()
{
	printf("\n1.Add a new phone");
	printf("\n2.Show all");
	printf("\n3.Search by ID");
	printf("\n4.Sort by value");
	printf("\n5.Edit information");
	printf("\n6.Sort by memory");
	printf("\n7.Exit");
	fflush(stdin);
}

   
void printPhone(struct Phone ch)
{
	printf("\n Phone information \n");
	printf("%d: %s %s %dGB %d$ \n", ch.id, ch.name, ch.cpu, ch.ram, ch.value);
}
  

void addPhone(int index)
  {
  	
  	ch[index].id = index + 1;
  	
  	fflush(stdin);
	 printf("\nEnter name phone: ");
 	 gets(ch[index].name);
 	
	 printf("\nEnter name cpu: ");
	 gets(ch[index].cpu);
	 
	 printf("\nEnter amount memory: ");
	 scanf("%d", &ch[index].ram);
	 
	 printf("\nEnter value: ");
	 scanf("%d", &ch[index].value);
	 printPhone(ch[index]);
    
	 
  } 
  
  void editPhone()
   {
   	fflush(stdin);
    int edit;
    int i;
    printf("ID want to edit: ");
    scanf("%d", &edit);

    for ( i = 0; i < index; i++)
	 {
        if (ch[i].id == edit) 
		{
			fflush(stdin);
            printf("Enter new details for phone:\n");
            printf("\nEdit name: ");
            gets( ch[i].name);
            printf("\nEdit cpu: ");
            gets(ch[i].cpu);
            printf("\nEdit amount memory: ");
            scanf("%d", &ch[index].ram);
            printf("\nEdit value: ");
            scanf("%d", &ch[i].value);
            printf("Phone details updated.\n");
            printPhone(ch[i]);
        }
    }
}
  
  void showAll()
  {
  	int i = 0;
  	for(i = 0; i < index; i++)
  	{
  		printPhone(ch[i]);
	  }
	  fflush(stdin);
  }
  
  
  void ID()
  {
  	int findID = 0;
  	int i = 0;
  	int check = 0;
  	printf("Enter ID: ");
  	scanf("%d", &findID);
  	
  	for(i = 0; i < index; i++)
  	{
  		if(ch[i].id == findID)
  		{
  			printf("FOUND");
  			check = 1;
  			printPhone(ch[i]);
		  
		}
	  }
	  if(check == 0)
	  {
	  	printf("Not Found");
	  }
  }
  

  void sort()
  {
  	int i, j;
  	int temp = 0;
  	int temp1 = 0;
  	int temp2 = 0;
  	char temp3[100];
  	
  	for(i = 0; i < index ; i++)
  	{
  		for (j = i + 1; j < index; j++)
  		{
  			if (ch[i].value > ch[j].value) 
  			{
  				temp = ch[i].value;
  				ch[i].value = ch[j].value;
  				ch[j].value = temp;
  		        
  		        temp1 = ch[i].id;
  		        ch[i].id = ch[j].id;
  		        ch[j].id = temp1;
  		        
  		        temp2 = ch[i].ram;
  				ch[i].ram = ch[j].ram;
  				ch[j].ram = temp2;
				
				strcpy(temp3, ch[i].name);
				strcpy(ch[i].name, ch[j].name);
				strcpy(ch[j].name, temp3);
				

			}
			  
		  }
	  }
	  printf("Sort phone:\n ");
	  for(i = 0; i < index; i++)
	  {
	  	printPhone(ch[i]);
	  }
}
  
  void sortram()
{
	int i, j;
  	int temp = 0;
  	int temp1 = 0;
  	int temp2 = 0;
  	char temp3[100];
  	
  	for(i = 0; i < index ; i++)
  	{
  		for (j = i + 1; j < index; j++)
  		{
  			if (ch[i].ram > ch[j].ram) 
  			{
  				temp = ch[i].ram;
  				ch[i].ram = ch[j].ram;
  				ch[j].ram = temp;
  		        
  		        temp1 = ch[i].id;
  		        ch[i].id = ch[j].id;
  		        ch[j].id = temp1;
  		        
  		        temp2 = ch[i].value;
  				ch[i].value = ch[j].value;
  				ch[j].value = temp2;
				
				strcpy(temp3, ch[i].name);
				strcpy(ch[i].name, ch[j].name);
				strcpy(ch[j].name, temp3);
				

			}
			  
		  }
	  }
	  printf("Sort memory:\n ");
	  for(i = 0; i < index; i++)
	  {
	  	printPhone(ch[i]);
	  }
}

int main()
{
	int mnu = 0;
	do
	{
		menu();
		printf("\nEnter menu: ");
		scanf("%d", &mnu);
		 
	switch(mnu)
	{
		case 1:
			addPhone(index);
			index++;
			break;
		case 2:
			showAll();
			break;
		case 3:
			ID();
			break;
		default:
			printf("Invalid menu, try again!");
			break;
		case 4:
			sort();
			break;
		case 5:
			editPhone();
			break;
		case 6:
			sortram();
			break;
		case 7:
			return 0;
			break;	
			
	}
	} while(1);
	return 0;
}