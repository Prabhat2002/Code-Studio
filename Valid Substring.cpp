    int findMaxLen(string s) 
    {
        stack<int>st;
        int res=0;
        int n=s.length();
    
        st.push(-1);
        for(int i=0;i<n;i++)
        {
           if(s[i]=='(')
             st.push(i);
           else
           {
              st.pop();
              if(!st.empty())
                  res=max(res,i-st.top());
              else
                  st.push(i);
           }
        }
      return res;
    }
