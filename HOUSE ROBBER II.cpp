
#include<iostream>
#include<vector>
using namespace std;


int rob(vector<int> num, int s, int e)
{
 if(s>e)
 {
 return 0;
 }
 
 int inc=num[s]+rob(num,s+2,e);
 int exc=rob(num,s+1,e);
 
 return max(inc,exc);
 
}

main()
{
 vector<int> num={3};
 int n=num.size()-1;
 int i=0;
 if(n==0)
 {
 return num[0];
 }
 int option1 = rob(num,i,n-1);
 int option2 = rob(num,1,n);
 
 cout<<max(option1,option2); 
}
