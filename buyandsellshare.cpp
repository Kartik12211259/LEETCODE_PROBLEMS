#include<iostream>
#include<vector>
using namespace std;


int mp(vector<int> price,int i,int n,int& maxprofit)
{
	//base case
	
	if(i==n)
	{
		return price[i];
	}	
	
	int futureprice = mp(price,i+1,n,maxprofit) ;
	
	maxprofit = max(maxprofit,futureprice-price[i]);
	return max(price[i],futureprice);
	
	
}


main()
{
	vector<int> price ={7,1,5,3,6,4};
	int i=0;
	int n=price.size()-1;
	int maxprofit=0;
	cout<<mp(price,i,n,maxprofit);
	cout<<endl;
	cout<<maxprofit;
}
