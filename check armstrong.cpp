// check armstrong number

#include<stdio.h>
#include<math.h>
main(){
	int n,r,s,k;

	printf("Enter no.");
	scanf("%d",&n);
	k=n;
	s=0;
	while(n!=0){
		r=n%10;
		s=pow(r,3)+s;
		n=n/10;
		
	}
	printf("%d",s);
	if(k==s){
		printf("Armstrong");
	}
	else{
		printf("Not Armstrong");
	}
	
}
