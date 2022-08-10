class Solution {
public:
    int reverse(int x) {
        string s=to_string(x);
       string ans="";
        if(x<0){
            ans+=s[0];
            for(int i=s.length()-1;i>=1;i--){
                ans+=s[i];
            }
        }
        else{
            for(int i=s.length()-1;i>=0;i--){
                ans+=s[i];
            }
        }
        if(stol(ans) < INT_MIN || stol(ans) > INT_MAX){
            return 0;
        }
        else{
            return stoi(ans);
        }
    }
};
