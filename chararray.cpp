#include<iostream>
using namespace std;
int length(char a[], int n)
{
	int count=0;
	int i=0;
	while(a[i]!='\0')
	{
		count++;
		i++;
	}
	
	return count;
}
void reverse(char a[], int size)
{
	int len=length(a,size);
	
	int i=0;
	int j=len-1;
	while(i<j)
	{
		char temp = a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	
}

checkpallindrome(char a[],int size)
{
	int len=length(a,size);
	int i=0;
	int j=len-1;
	while(i<=j)
	{
		if(a[i]!=a[j])
		{
			return false;
		}
		i++;
		j--;
	}
	
	return true;
}
main()
{
	char a[100];
	cin>>a;
//	reverse(a,100);
cout<<checkpallindrome(a,100);
	
}
