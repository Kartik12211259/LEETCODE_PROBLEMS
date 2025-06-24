#include<iostream>
using namespace std;

int editdistance(string& a, string& b, int i, int j)
{
	if(i>=a.length())
	{
	  return b.length()-j;
	}
	
	if(j>=b.length())
	{
	  return a.length()-i;
	}	
	int ans=0;
	
	if(a[i]==b[j])
	{
	   	ans=editdistance(a,b,i+1,j+1);
	}	
	
	else
	{
		//insert
		int option1=1+editdistance(a,b,i,j+1);
		//remove
		int option2=1+editdistance(a,b,i+1,j);
		//replace
		int option3=1+editdistance(a,b,i+1,j+1);
		
		
		return min(option1,min(option2,option3));
		
	}

    return ans;
	
}



main()
{
	string word1="horse";
	string word2="ros";
	int i=0;
	int j=0;
	cout<<editdistance(word1,word2,i,j);
}
