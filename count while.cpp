#include<stdio.h>
main(){
	
	int n,count;
	printf("Enter no.");
	scanf("%d",&n);
	while(n!=0){
		
		count=count+1;
		n=n/10;
	}	
	printf("%d",count);
}
