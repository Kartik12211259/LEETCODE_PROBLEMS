
void printmiddleelement(stack<int>& s, int mid, int i)
{
	if(i==mid)
	{
		cout<< s.top();
		return;
	}
	int tops= s.top();
	s.pop();
	
	printmiddleelement(s,mid,i+1);
	
	s.push(tops);
	
}
