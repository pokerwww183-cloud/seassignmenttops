#include<stdio.h>
#include<string.h>

int main()
{
	char team[20];
	
	printf("enter your favourite ipl team:");
	scanf("%s",team);
	
	if(strcmp(team,"CSk")==0)
	{
		printf("whistle podu! chennai super king!");
	}
	else if(strcmp(team,"MI")==0)
	{
	
	printf("duniya hila denge! Mumbai indians!");
}
else if(strcmp(team,"RCB")==0)
{
	printf("Ee sala cup Namde! RCB!");
	
}
else if(strcmp(team,"KKR")==0)
{
	printf("korbo lorbo Jeetbo! KKR!");
}
else
{
	printf("team not found!");

}
	return 0;
}

