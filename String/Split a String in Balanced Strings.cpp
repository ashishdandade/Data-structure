class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                cnt++;
            }
            else{
                cnt--;
            }
        if(cnt==0){
            ans++;
        }
        }
       
        return ans;
    }
};
