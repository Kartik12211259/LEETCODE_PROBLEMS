#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int>& q, int k, int size)
{
	
	if(size<k)
	{
		queue<int> qs;
		
		while(size!=0)
		{
			qs.push(q.front());
			q.pop();
			size--;
		}
		
		while(!qs.empty())
		{
			q.push(qs.front());
			qs.pop();
		}
		return;
	}
	
	if(q.empty())
	{
		return;
	}
	
	int j=k;
	
	stack<int> s;
	
	while(j!=0)
	{
		s.push(q.front());
		q.pop();
		j--;
	}
	
		while(!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
		
	reverse(q,k,size-k);

	

}
main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	q.push(70);
	q.push(80);
	int k=3;
	int size=q.size();
	reverse(q,k,size);
	
	while(!q.empty())
	{
		cout<<q.front()<<"  ";
		q.pop();
	}
	
}
