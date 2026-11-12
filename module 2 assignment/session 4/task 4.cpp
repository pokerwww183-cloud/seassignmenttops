#include<stdio.h>
int main()
{
	int like,comments,shares;
	
	printf("enter like:");
	scanf("%d",&like);
	
	printf("enter comments:");
	scanf("%d",&comments);
	
	printf("enter shares:");
	scanf("%d",&shares);
	
	if(like>=1000 || (comments >=200 && shares >=50))
	{
		printf("post is trending");
	}
	else
	{
		printf("post is not trending");
		
	}
	return 0;
}
