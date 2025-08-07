#include<iostream>
#include<vector>
using namespace std;

bool isSafe(int newx, int newy,	vector<vector<int>> m,vector<vector<bool>> visited,int n)
{
	if(newx>=n || newx < 0 || newy >=n || newy<0)
	{
		return false;
	}
	if(visited[newx][newy]==true)
	{
		return false;
	}
	
	if(m[newx][newy]==0)
	{
		return false;
	}
	
	return true;
}


void solve(vector<vector<int>> &m, vector<vector<bool>> &visited, int n, int srcx, int srcy, int destx, int desty, string output, vector<string> &ans)
{
	if(srcx == destx && srcy == desty)
	{
		ans.push_back(output);
		return;
	}	
	//R
	int newx = srcx;
	int newy = srcy+1;
	
	if(isSafe(newx,newy,m,visited,n))
	{
		visited[newx][newy]=true;
		solve(m,visited,n,newx,newy,destx,desty,output+'R',ans);
		visited[newx][newy]=false;
	}
	
	//D
	newx = srcx+1;
	newy = srcy;
	if(isSafe(newx,newy,m,visited,n))
	{
		visited[newx][newy]=true;
		solve(m,visited,n,newx,newy,destx,desty,output+'D',ans);
		visited[newx][newy]=false;
	}
	
	//L
	newx = srcx;
	newy = srcy-1;
	if(isSafe(newx,newy,m,visited,n))
	{
		visited[newx][newy]=true;
		solve(m,visited,n,newx,newy,destx,desty,output+'L',ans);
		visited[newx][newy]=false;
	}
	
	//U
	newx = srcx-1;
	newy = srcy;
	if(isSafe(newx,newy,m,visited,n))
	{
		visited[newx][newy]=true;
		solve(m,visited,n,newx,newy,destx,desty,output+'U',ans);
		visited[newx][newy]=false;
	}
	
	
}
main()
{
	vector<vector<int>> m ={ {1,0,1,1},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
	int n =m[0].size();
	vector<vector<bool>> visited(n,vector<bool>(n,0));
	int srcx=0;
	int srcy=0;
	int destx=n-1;
	int desty=n-1;
	string output="";
	vector<string> ans;
	
	if(m[0][0]==0)
	{
		cout<<"Nothing can be done";
		return 0;
	}
	
	visited[0][0]=true;
	
	solve(m,visited,n,srcx,srcy,destx,desty,output,ans);
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i];
		cout<<endl;
	}
	


}
