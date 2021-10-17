class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int ma=0;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {st.push('(');
              cnt++;
            }
            else if(s[i]==')' &&st.size())
            {
                ma=max(ma,cnt);
                 cnt--;
                st.pop();
               
               
                
            }
          
        
        }
        return ma;
        
    }
};
