class Solution {
public:
    int solverec(int n, vector<int>& nums, vector<int>&dp){
        if(n == 0){
            dp[n] = nums[0];
            return nums[0];
        }
        if(n < 0)
            return 0;
        if(dp[n]!=-1)
            return dp[n];
        
        //we consider and pick the current element
        int pick = nums[n] + solverec(n-2,nums,dp);
        
        //we dont pick the current element
        int notpick = 0 + solverec(n-1,nums,dp);
        
        dp[n] = max(pick,notpick);
        return dp[n];
    }
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        int ans = solverec(n-1, nums, dp);
        return ans;
    }
};
// https://www.youtube.com/watch?v=3WaxQMELSkw&list=PLgUwDviBIf0qUlt5H_kiKYaNSqJ81PMMY&index=7
