// maximal square

#include<iostream>
#include<vector>
using namespace std;


int maximalsquare(vector<vector<int>> v, int i, int j,int& maxi)
{
	//base case
	if(i>=v.size() || j>=v[i].size())
	{
		return 0;
	}

	int option1= maximalsquare(v,i,j+1,maxi);
	int option2= maximalsquare(v,i+1,j+1,maxi);
	int option3= maximalsquare(v,i+1,j,maxi);

	
	if(v[i][j]!=0)
	{
		int ans= 1+	min(option1,min(option2,option3));
		maxi=max(maxi,ans);
		return ans;
	}
	else
	{
		return 0;
	}
	
}
main()
{
	vector<vector<int>> v= {{1,0,1,1},{0,1,0,0},{1,0,1,1},{1,0,1,1}};
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	int maxi = INT_MIN;
 maximalsquare(v,0,0,maxi);
 cout<<endl;
 cout<<maxi;
	
}
