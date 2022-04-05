class Solution {
public:
    int countsubset(vector<int>&nums,int n,int M){
        int dp[n+1][M+1];
         for(int i=0;i<n;i++){
            for(int j=0;j<M;j++){
                if(i==0){
                    dp[i][j]=0;
                    
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
            
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=M;j++){
                if(nums[i-1]<=j){
                    dp[i][j]=dp[i-1][j-nums[i-1]] +dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][M];
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        int n=nums.size();
         for(int i = 0; i < n; i++)
             sum += nums[i];
         
        int M = (sum + target)/2;
        if(sum < target || (sum + target) % 2 != 0)
            return 0;
         return countsubset(nums, n, M);
    }
};
