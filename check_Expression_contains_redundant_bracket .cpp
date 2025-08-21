class Solution {
  public:
    int checkRedundancy(string s) {
        
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            char ch= s[i];
            
            if(ch =='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/')
            {
                st.push(ch);
            }
            
            else if(ch==')' && (!st.empty()) && (st.top()=='+' || st.top()=='-' || st.top()=='*' || st.top()=='/'))
            {
                while(st.top()!='(')
                {
                    st.pop();
                }
                st.pop();
            }
            
            else if(ch==')' && (!st.empty()) && (st.top()!='+' && st.top()!='-' && st.top()!='*' && st.top()!='/'))
            {
                return 1;
            }
        }
        
        
        return 0;
    }
};
