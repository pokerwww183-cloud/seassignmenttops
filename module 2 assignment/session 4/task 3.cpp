#include<stdio.h>
 int main()
 {
 	int age;
 	float order;
 	
 	printf("eneter age:");
 	scanf("%d",&age);
 	
 	printf("enter order value:");
 	scanf("%f",&order);
 	
 	if(age>=18 && order > 500)
 	{
 		printf("eligible for offer");
	 }
	 else
	 {
	 	printf("not eligible");
	 }
	 return 0;
 }
