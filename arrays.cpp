#include<stdio.h>
main()
{
	int A[5],t,i,s=0;
	printf("Enter 5 elements");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=4;i++)
	{
		s=s+A[i];
	}
	t=s/5;
	printf("Avg is %d",t);
	
}
