vector<int> ans(stack<int> s,vector<int> v,vector<int>& a, int& i)
{
	if(i<0)
	{
		return a;
	}
	
	if(s.top() < v[i])
	{
		a.push_back(s.top());
		s.push(v[i]);
		i--;
		
	}
	
	else
	{
		while(s.top()>v[i])
		{
			s.pop();
		}
		a.push_back(s.top());
		s.push(v[i]);
		i--;
	}
	return ans(s,v,a,i);
}

