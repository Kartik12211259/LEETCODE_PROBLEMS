
void insertatbottom(stack<int>& s, int value)
{
	if(s.empty())
	{
		s.push(value);
		return;
	}
	
	int tops= s.top();
	s.pop();
	
	insertatbottom(s,value);
	
	s.push(tops);
}


void reverse(stack<int>& s)
{
	if(s.empty())
	{
		return;
	}
	
	int t= s.top();
	s.pop();
	
	reverse(s);
	insertatbottom(s,t);
	
	
	
}
