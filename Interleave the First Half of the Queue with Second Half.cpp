 #include<iostream>
 #include<queue>
 using namespace std;
 
 
    queue<int> solve(queue<int> qs, queue<int> q)
    {
        if(q.empty())
        {
            return qs;
        }
        
        int element = qs.front();
        qs.pop();
        qs.push(element);
        
        qs.push(q.front());
        q.pop();
        
        return solve(qs,q);
        
        
    }
    queue<int> rearrangeQueue(queue<int> q) {
        queue<int> qs;
        
        int k=q.size();
        
        for(int i=0;i<k/2;i++)
        {
            qs.push(q.front());
            q.pop();
        }
        
       
        return solve(qs,q);
    }


main()
{
	queue<int> q;
	q.push(2);
	q.push(4);
	q.push(3);
	q.push(1);
	q.push(5);
	q.push(6);
	
queue<int> ans=	rearrangeQueue(q);
	
	while(!ans.empty())
	{
		cout<<ans.front()<<" ";
		ans.pop();
	}
	
}
