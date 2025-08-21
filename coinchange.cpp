#include<iostream>
#include<vector>
using namespace std;

int coins(vector<int> a, int amount)
{
	if(amount==0)
	{
		return 0;
	}
	
	int mini= INT_MAX;
	
	for(int i=0;i<a.size();i++)
	{
		int coin = a[i];
		if(coin<=amount)
		{
			int recans= coins(a,amount-coin);
			
			int coinused=1+recans;
			
			mini=min(mini,coinused);
		}
	}
	
	return mini;
}



main()
{
	vector<int> a={1,5,2};
	int amount = 11;

cout<<	coins(a,amount);
}
