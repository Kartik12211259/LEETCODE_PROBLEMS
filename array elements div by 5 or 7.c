#include<stdio.h>
main()
{
	int A[5],i;
	printf("Enter 5 elements");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(A[i]%5==0 || A[i]%7==0)
		{
			printf("%d",A[i]);
		}
	}

}
// || OR
// & And
