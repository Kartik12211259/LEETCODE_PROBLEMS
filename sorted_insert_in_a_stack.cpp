
void sortedinsert(stack<int>& s, int val)
{
	if(s.empty())
	{
		s.push(val);
		return;
	}
	
	int element = s.top();
	
	if(element > val)
	{
		s.pop();
		sortedinsert(s,val);
		s.push(element);
	}
	
	
	else
	{
		s.push(val);
	}
	
	
	
}


