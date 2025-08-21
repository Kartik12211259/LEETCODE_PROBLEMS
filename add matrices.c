#include<stdio.h>
main()
{
	int C[3][3],B[3][3]={10,11,12,13,14,15,16,17,18},A[3][3]={1,2,3,4,5,6,7,8,9},r,c;
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d ",A[r][c]);
		}
		
		printf("\n");
	}
		

	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d ",B[r][c]);
		}
		
		printf("\n");
	}
	
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			C[r][c]=A[r][c]+B[r][c];
		}
	}
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d",C[r][c]);
		}
		
		printf("\n");
	}
	
	
	
	
	
}
