#include<iostream>
using namespace std;
int main()
{
	int a[10]={2,8,17,20,25,26,35,44,50,55};
	int l=0;
	int h=9;
	int mid;
	int target=2;
	while(l<=h)
	{
		mid=(l+h)/2;
		
		if(a[mid]==target)
		{
			return mid;
		}
		
		if(a[mid]>target)
		{
			h=mid-1;
		}
		else
		{
		    l=mid+1;	
		}
	}
}
