ks(vector<int> price,vector<int> weight,int w,int i)
{
	
	if(i>=price.size() || w<=0)
	{
		return 0;
	}
	// exclude
	int exc = ks(price,weight,w,i+1);
	// include
	int inc =0;
	if(w>=weight[i])
	{
	
    inc	 = price[i]+ks(price,weight,w-weight[i],i+1);
	
	}
	int ans = max(inc,exc);
	return ans;
	
}
