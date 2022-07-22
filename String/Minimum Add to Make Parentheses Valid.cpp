class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> stack;
        
        for(char s : S){
            if(s=='(')
                stack.push(s);
            else{
                if(!stack.empty() && stack.top()=='(')
                    stack.pop();
                else
                    stack.push(s);
            }
        }
        return stack.size();
    }
};
// time O(N)
// space O(N)

class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt<0){
                ans+=abs(cnt);
                cnt=0;
            }
        }
        ans+=abs(cnt);
        return ans;
    }
};
// time O(N)
// space O(N)
