#include<stdio.h>
int main()
{
	int count = 5;
	printf("before: %d\n",count);
	printf("pre- increment: %d\n",++count);
	printf("after pre-increment: %d\n",++count);
	
	count=5;
	printf("before: %d\n",count);
	printf("post-increment: %d\n",count++);
	printf("after post-increment: %d\n",count);
	
	return 0;
}
