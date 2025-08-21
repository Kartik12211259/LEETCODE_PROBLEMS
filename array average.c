#include<stdio.h>
main()
{
	int A[5],i,s=0;
	float avg;
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<5;i++)
	{
		s= s+A[i];
		
	}
	
	avg=s/5;
	printf("%f",avg);
}
