#include<stdio.h>
main()
{
	int A[10],i,t;
	printf("ENter 5 elements");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=9;i=i+2)
	{
		t=A[i];
		A[i]=A[i+1];
		A[i+1]=t;
	}
	
	for(i=0;i<=9;i++)
	{
		printf("%d",A[i]);
	}
}
