class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int> q;
       vector<int> ans;
        for(int i=0;i<k;i++)
        {
            if(arr[i]<0)
            {
                q.push(i);
            }
        }
        
        for(int i=k;i<arr.size();i++)
        {
            
            if(q.empty())
            {
                ans.push_back(0);
            }
            
            else
            {
                int index = q.front();
                
                ans.push_back(arr[index]);
               
            }
            
            
            if(!q.empty() && i - q.front()>=k)
            {
                q.pop();
            }
            
            int e = arr[i];
            if(e<0)
            {
                q.push(i);
            }
            
            
            
            
        }
        if(q.empty())
            {
                ans.push_back(0);
            }
            
            else
            {
                int index = q.front();
                
                ans.push_back(arr[index]);
               
            }
        
        
        return ans;
    }
};
