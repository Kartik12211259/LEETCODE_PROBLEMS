#include<iostream>
#include<vector>
using namespace std;

int mad(vector<vector<int>> v, int target, int i,int sum)
{
   if(i==v.size())
   {
   	  return abs(target-sum);
   }
   
    int dif = INT_MAX;
    
  for(int j=0;j<v[0].size();j++)
  {
  int result=	mad(v,target,i+1,sum+v[i][j]);
  	 dif = min(result,dif);
  }
 
  return dif;
  
}

main()
{
//	int rowsize=v.size();
//	int colsize=v[0].size();
	int i=0;
	int j=0;
	int sum=0;
	vector<vector<int>> v={ {1,2,3},
							 {4,5,6},
							 {7,8,9}
							 };
							 
			int target =24;		 
	cout<<mad(v,target,i,sum);
}
