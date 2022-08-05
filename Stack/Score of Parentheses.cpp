class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stk;
        int score=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                stk.push(score);
                score=0;
            }
            else
            {
                score+=stk.top()+max(score,1);
                stk.pop();
            }
        }
        return score;
        
    }
};
