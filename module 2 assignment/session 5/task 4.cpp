#include<stdio.h>
int main(){
	int age;
	
	
	printf("enter your age:");
	scanf("%d",&age);
	
	if (age>=18){
		printf("eligible for driving licence\n");
		if (age>=21){
			printf("eligible for credit card\n");
			if (age>=25){
				printf("eligible for car rental\n");
			}
		}
} else{
	printf("not eligible for driving licence,credit card,car rental\n");
}

	return 0;
}
