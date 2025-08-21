
class stack
{
	public:
		
	int *arr;
	int size;
	int top1;
	int top2;
	
	stack(int capacity)
	{
		 arr = new int[capacity];
		 size= capacity;
		 top1=-1;
		 top2=size;
	}
	
	void push1(int value)
	{
		if(top2-top1==1)
		{
			cout<<"Stack Overflow"<<endl;
			return;
		}
		
		top1++;
		arr[top1]=value;
	}
	
		void push2(int value)
	{
		if(top2-top1==1)
		{
			cout<<"Stack Overflow"<<endl;
			return;
		}
		
		top2--;
		arr[top2]=value;
	}
	
	
	void pop1()
	{
		if(top1==-1)
		{
			cout<<"Empty stack"<<endl;
			return;
		}
		arr[top1]=0;
		top1--;
	}
	
		void pop2()
	{
		if(top2==-1)
		{
			cout<<"Empty stack"<<endl;
			return;
		}
		arr[top2]=0;
		top2++;
	}
	
	int getsize()
	{
		return (size-top2+top1+1);
	}
	
	int gettop1()
	{
		return arr[top1];
	}
	
		
	int gettop2()
	{
		return arr[top2];
	}
	
	isempty()
	{
		if(top1==-1 && top2==size)
		{
			return true;
		}
		
		return false;
	}
	
	void print()
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
};
