class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++) {
            if(s[i]!=')'){
                 st.push(s[i]);
            }
        else{
        string ts="";
        while(!st.empty() && st.top()!='('){
            ts+=st.top();
            st.pop();
        }
        st.pop();//for removing parenthesis
        for(int i=0;i<ts.size();i++){
            st.push(ts[i]);
        }
        }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
