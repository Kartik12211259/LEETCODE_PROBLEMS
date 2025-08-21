#include<iostream>
#include<vector>
using namespace std;
main()
{
	// bubble sort
	vector<int> v={15,7,16,2,11,12,14,100};
	int n = v.size();
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(v[j]>v[j+1])
			{
				swap(v[j],v[j+1]);
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	
}
