// Transpose of a matrix A 
#include<stdio.h>
main()
{
	int B[3][3],A[3][3]={1,2,3,4,5,6,7,8,9},r,c;
	for(c=0;c<3;c++)
	{
		for(r=0;r<3;r++)
		{
			B[c][r]=A[r][c];
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf(" %d ",B[r][c]);
			
		}
		printf("\n");
	}
	
	
}
