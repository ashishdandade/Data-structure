class Solution {
public:
     int lcs(string text1, string text2,int m,int n) {
        
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++){
            dp[i][0]=0;
        }
        for(int j=0;j<=n;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(text1[i-1]==text2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
        
    }
    int minDistance(string word1, string word2) {
       int n1 = word1.size(), n2 = word2.size();
        int length = lcs(word1, word2, n1, n2);
        return n1 + n2 - 2*length;
    }
};
