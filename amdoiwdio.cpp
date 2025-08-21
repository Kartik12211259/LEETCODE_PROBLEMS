#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
 // int a[5]={1,2,2,5,5};
  //int sum=0;
  //for(int i=0;i<5;i++)
  //{
  	//sum=sum^a[i];
  //}
  
  //cout<<sum;
  int a[5]={0};	
 int arr[]={1,2,3,5};
  for(int i=0;i<5;i++)
  {
    a[i] =i+1; 	
   } 
   
 //  for(int i=0;i<5;i++)
  // {
   	//cout<<arr[i]<<" ";
   //}
   //cout<<endl;
    //for(int i=0;i<5;i++)
   //{
   	//cout<<a[i]<<" ";
   //}
   //cout<<endl;
   int sum=0;
   for(int i=0;i<5;i++)	
   {
   	if(i<4)
   	{
	   
   	sum=sum^a[i]^arr[i];
   }
   else
   {
   	sum=sum^a[i];
   }
   }
   
   return sum;
}
