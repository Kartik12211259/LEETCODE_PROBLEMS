#include<iostream>
using namespace std;
main()
{
	int a[5]={1,0,1,0,1};
	
	int b[6]={0};
	
	int c=1;
	
	for(int i=0;i<5;i++)
	{
		if(a[i]==0)
		{
			a[i]=1;
		}
		else
		{
			a[i]=0;
		}
	}
	int sum;
	for(int i=4;i>=0;i--)
	{
		sum = a[i]+c;
		b[i+1]=sum%2;
		c=sum/2;
	}
	
	if(c==1)
	{
		b[0]=1;
	}
	else
	{
		b[0]=0;
	}
	
	for(int i=0;i<=5;i++)
	{
		cout<<b[i]<<" ";
	}
	
}
