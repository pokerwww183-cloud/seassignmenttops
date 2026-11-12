#include<stdio.h>
int main()
{
	int choice;
	
	do
	{
		printf("\n1.view IPL teams");
		printf("\n2.add new team");
		printf("\n3.exist");
		
		printf("\n enter your choice");
		scanf("%d",&choice);
		
		if(choice==1)
		{
			printf("\n CSK,MI,RCB");
			
		}
		else if(choice==2)
		{
			printf("\n add new team");
		}
		else if(choice==3)
		{
			printf("\n existing...");
		}
		else
		{
			printf("\n invalid choice");
		}
	}while(choice!=3);
	
	return 0;
	
	
		
	
	
	
}

