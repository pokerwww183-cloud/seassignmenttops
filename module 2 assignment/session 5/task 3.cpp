#include<stdio.h>
int main(){
	float cartamount , discount=0.0,finalamount;
	
	printf("enter the total cart number:");
	scanf("%f",&cartamount);
	
	if (cartamount>1000){
		if(cartamount>2000){
			discount = cartamount *0.20;
			printf("eligible for 20% discount!\n");
		}
		else{
			discount = 0.0;
			printf("no discount applicable on amounts <=1000\n");
		}
		finalamount = cartamount-discount;
		printf("final amount =%.2f\n",finalamount);
	}
	return 0;

}
