#include<iostream>
using namespace std;
main()
{
	int a[5]={0,0,0,0,0};
	int n=5;
	int b[n+1]={0};
	int c=1;
	int sum=0;
	for(int i=0;i<n;i++)
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
	for(int i=n-1;i>=0;i--)
	{
		sum=a[i]+c;
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
	
	for(int i=0;i<=n;i++)
	{
		cout<<b[i]<<" ";
	}
}
