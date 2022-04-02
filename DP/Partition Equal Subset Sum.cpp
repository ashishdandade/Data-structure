class Solution {
public:
    bool subset(vector<int>&arr,int n,int sum){
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0] = true;
        }
        for(int i=1;i<=sum;i++){
            dp[0][i] = false;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j){
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];    
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
                
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& arr) {
        int sum = 0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%2!=0){
            return false;
        }
          return subset(arr,n,sum/2);
    }
};
