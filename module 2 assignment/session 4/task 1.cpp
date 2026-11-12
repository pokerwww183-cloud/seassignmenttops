#include<stdio.h>

float calculatetotal( float itemprice, int quantity)
{
	return itemprice *quantity;
}

int main()
{
	float itemprice;
	int quantity;
	float total;
	
	printf("enter item price:");
	scanf("%f",&itemprice);
	
	printf("enter quantity:");
	scanf("%d",&quantity);
	
	total = calculatetotal(itemprice,quantity);
	
	printf("total bill = %.2f",total);
	
	return 0;
	
	
}
