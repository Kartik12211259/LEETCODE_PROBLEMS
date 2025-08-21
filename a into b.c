#include<stdio.h>
main()
{
	int a,b,i,s;
	s=0;
	printf("Write two numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=1;i<=b;i++)
	{
		s=s+a;
	}
	
	printf("%d",s);
}
