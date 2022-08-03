// -----------------------------two pointer-------------------------
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        int j=0;
        for(int i=0;i<n and j<m;i++){
            if(s[j]==t[i])
                j++;
        }
        // If all characters of str1 were found in str2
       return (j == m);
    }
};
// -----------------------using dynamic programming-------------------
class Solution {
public:
    int issub(string &s1,string &s2,int i,int j,vector<vector<int>>&dp) {
        if(i==0 || j==0){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(s1[i-1]==s2[j-1]){
            return dp[i][j]=1+issub(s1,s2,i-1,j-1,dp);
        }
        else{
            return dp[i][j]=issub(s1,s2,i,j-1,dp);
        }
    }
    bool isSubsequence(string s, string t) {
       int m=s.length();
       int n=t.length();
        if(m>n)
            return false;
        
    vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
       if(issub(s,t,m,n,dp) == m)
            return true;
        return false; 
    }
};
