#include<stdio.h>
main()
{
	int A[10],i,k;
	for(i=0;i<=9;i++)
	{
		scanf("%d",&A[i]);
	}
	
	k=A[0];
	for(i=0;i<=9;i++)
	{
		if(k<A[i])
		{
			A[i]=k;
			
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("%d",A[i]);
	}

}
