class Solution {
public:
    int longestPalindrome(string s) {
        int cnt=0;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x:mp){
            if(x.second%2!=0) {
                cnt++;
            }
        }
        if(cnt>0){
            return s.length()-cnt+1;
        }
        return s.length();
    }
};
