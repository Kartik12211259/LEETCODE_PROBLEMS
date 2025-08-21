#include<stdio.h>
#include<math.h>
main()
{
	int n, r, rev=0, k;
	
	printf("Enter no.");
	scanf("%d",&n);
	k=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		
	}
	printf("Reverse of %d is %d\n",k,rev);
	
	if(k==rev)
	{
		printf("Pallindrome");
		
	}
	else
	{
		printf("Not Pallindrome");
	}
	
	
	
}
