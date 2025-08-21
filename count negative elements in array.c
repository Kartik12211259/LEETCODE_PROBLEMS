#include<stdio.h>
main()
{
	int A[5],i,count=0;
	for(i=0;i<=4;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<=4;i++)
	{
		if(A[i]<0)
		{
			count= count+1;
		}
	}
	
	printf("Number of negative elements = %d",count);
}
