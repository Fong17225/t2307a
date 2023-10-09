#include <stdio.h>
#include <string.h>

struct Goods //structure
 {
 	int id;
 	char name[30];
 	char type[30];
 	float value; 
 };
struct Goods sp[20];
int index = 0;

   //Show all
void printGoods(struct Goods sp)
{
	printf("\n Goods information \n");
	printf("%d : %s %s %fVND \n", sp.id, sp.name, sp.type, sp.value);
}
  

 // Add goods
void addGoods(int index)
  {
  	//autmatic set id
  	sp[index].id = index + 1;
  	
  	fflush(stdin);
	 printf("\nEnter Product's Name: ");
 	 gets(sp[index].name);
 	
	 printf("\nEnter Type: ");
	 gets(sp[index].type);
	 
	 printf("\nEnter Value: ");
	 scanf("%f", &sp[index].value);
	 printGoods(sp[index]);
    
	 
  } 
  //edit
  void editGoods()
   {
   	fflush(stdin);
    int edit;
    int i;
    printf("ID goods edit: ");
    scanf("%d", &edit);

    for ( i = 0; i < index; i++)
	 {
        if (sp[i].id == edit) 
		{
			printGoods(sp[i]);
			//addStudent(index);
			fflush(stdin);
            printf("Enter new details for the goods:\n");
            printf("\nEdit Name: ");
            gets( sp[i].name);
            printf("\nEdit Type: ");
           gets(sp[i].type);
            printf("\nEdit Value: ");
            scanf("%f", &sp[i].value);
            printf("Goods details updated.\n");
            printGoods(sp[i]);
        }
    }
}
  //show
  void printAll()
  {
  	int i = 0;
  	for(i = 0; i < index; i++)
  	{
  		printGoods(sp[i]);
	  }
	  fflush(stdin);
  }
  
  //Search goods By ID
  void findByID()
  {
  	int findID = 0;
  	int i = 0;
  	int check = 0;
  	printf("Enter ID: ");
  	scanf("%d", &findID);
  	
  	for(i = 0; i < index; i++)
  	{
  		if(sp[i].id == findID)
  		{
  			printf("FOUND");
  			check = 1;
  			printGoods(sp[i]);
		  
		}
	  }
	  if(check == 0)
	  {
	  	printf("Not Found");
	  }
  }
  
  //Sort goods by mark
  void sort()
  {
  	int i, j;
  	float temp = 0;
  	long long temp1 = 0;
  	char temp2[100];
  	
  	for(i = 0; i < index ; i++)
  	{
  		for (j = i + 1; j < index; j++)
  		{
  			if (sp[i].value > sp[j].value) 
  			{
  				temp = sp[i].value;
  				sp[i].value = sp[j].value;
  				sp[j].value = temp;
  		        
  		        temp1 = sp[i].id;
  		        sp[i].id = sp[j].id;
  		        sp[j].id = temp1;
  		        
  		        strcpy(temp2,sp[i].type);
				strcpy(sp[i].type, sp[j].type);
				strcpy(sp[j].type, temp2);
				
				strcpy(temp2, sp[i].name);
				strcpy(sp[i].name, sp[j].name);
				strcpy(sp[j].name, temp2);
				

			}
			  
		  }
	  }
	  printf("Sort goods:\n ");
	  for(i = 0; i < index; i++)
	  {
	  	printGoods(sp[i]);
	  }
}
  // Menu
void menu()
{
	printf("\n1.Add New goods");
	printf("\n2.Show All");
	printf("\n3.Search goods By ID");
	printf("\n4.Sort goods By Grade");
	printf("\n5.Edit goods information");
	printf("\n6.Exit");
	fflush(stdin);
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
			addGoods(index);
			index++;
			break;
		case 2:
			printAll();
			break;
		case 3:
			findByID();
			break;
		default:
			printf("Invalid menu, try again!!!");
			break;
		case 4:
			sort();
			break;
		case 5:
			editGoods();
			break;
		case 6:
		     printf("Thank you for using the system!");
			return 0;
			break;
			
	}
	} while(1);
	return 0;
}