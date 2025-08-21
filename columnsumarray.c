// Sum of row elements of an array !!

#include<stdio.h>
main()
{
	int A[3][3]={1,2,3,4,5,6,7,8,9},r,c,s;
	
	for(c=0;c<3;c++)
	{
		s=0;
		for(r=0;r<3;r++)
		{
			s=s+A[r][c];
			
		}
		
		printf("%d",s);
		printf("\n");
	}
	
	

}
