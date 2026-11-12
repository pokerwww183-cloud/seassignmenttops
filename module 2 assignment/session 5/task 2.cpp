#include<stdio.h>
int main()
{
	int choice;
	
	printf("1.breakfast\n");
	printf("2.lunch\n");
	printf("3.dinner\n");
	printf("4.snacks\n");
	
	printf("enter your choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("breakfast: poha");
			break;
		case 2:
		printf("lunch: rice and daal");
		break;
		case 3:
		printf("dinner: roti and sabzi");
		case 4:
		printf("snacks: sandwhich");
		default:
			printf("invalid choice");
			
			
		
	}
	return 0;
}
