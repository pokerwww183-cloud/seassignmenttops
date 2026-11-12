#include<stdio.h>
#include<string.h>

int main()
{
	char guess[30];
	do
	{
		printf("\n guess the song:");
		scanf("%S",guess);
		
		if(strcmp(guess,"kesariya")==0)
		{
			printf("correct! you guessed it!");
			break;
		}
		else
		{
			printf("wrong guess! try again.");
		}
		
	}while(strcmp(guess,"kasariya")!=0);
	
	return 0;
}

	


