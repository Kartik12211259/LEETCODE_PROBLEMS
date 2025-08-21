#include<stdio.h>
main()
{
	int A[10],i;
	printf("Write 10 inputs");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&A[i]);
	}
	
	printf("display 10 inputs\n");
	for(i=1;i<=10;i++)
	{
		printf("%d",A[i]);
	}
	
}
