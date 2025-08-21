
void insertatbottom(stack<int>& s, int value)
{
	if(s.empty())
	{
		s.push(value);
		return;
	}
	
	int topelement= s.top();
	s.pop();
	
	insertatbottom(s,value);
	
	s.push(topelement);
}
