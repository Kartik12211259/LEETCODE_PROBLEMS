class Solution {
public:


void Next(vector<int> height, vector<int>& nextans)
{
    stack<int> s;
    s.push(-1);


    for(int i=height.size()-1;i>=0;i--)
    {
       

        while(s.top()!=-1 && height[s.top()] >= height[i])
        {
            s.pop();
        }

        nextans.push_back(s.top());
        s.push(i);
    }
}



void Prev(vector<int> height, vector<int>& prevans)
{
    stack<int> s;
    s.push(-1);


    for(int i=0;i<height.size();i++)
    {
       

        while(s.top()!=-1 && height[s.top()] >= height[i])
        {
            s.pop();
        }

        prevans.push_back(s.top());
        s.push(i);
    }
}



    int largestRectangleArea(vector<int>& heights) {
        
        vector<int> nextans;
        vector<int> prevans;

        Next(heights, nextans);
        reverse(nextans.begin(),nextans.end());

        Prev(heights, prevans);

        for(int i=0;i<nextans.size();i++)
        { 
            if(nextans[i]==-1)
            {
                nextans[i]=nextans.size();
            }
            cout<<nextans[i]<<' ';
          
        }


int maxarea=INT_MIN;
        for(int i=0;i<heights.size();i++)
        {
            int height = nextans[i]-prevans[i]-1;
            int area = height * heights[i];
            maxarea=max(area,maxarea);
        }

        return maxarea;
    
          
    }
};
