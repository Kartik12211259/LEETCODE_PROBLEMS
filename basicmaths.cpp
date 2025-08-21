#include<iostream>
#include<vector>
using namespace std;
main()
{
	int n=22;
	
	vector<bool> prime(22,true);
	int ans=0;
	prime[0]=prime[1]=false;
	for(int i=2;i<22;i++)
	{
		if(prime[i]==true)
		{
			ans++;
			
			int j=i*2;
			while(j<22)
			{
				prime[j]=false;
				j=j+i;
			}
		}
	}
	
	return ans;
	
	
}
