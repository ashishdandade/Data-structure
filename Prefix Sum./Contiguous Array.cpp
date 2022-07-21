class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum=0;
        int longestSub=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==0?-1:1;
            if(sum==0){
                if(longestSub<i+1){
                    longestSub=i+1;
                }
            }
            else if(mp.find(sum)!=mp.end()){
                if(longestSub<i-mp[sum]){
                    longestSub=i-mp[sum];
                }
            }
            else{
                mp[sum]=i;
            }
        }
        return longestSub;
    }
};
// since we are traversing the array the time complexity is O(N)
// in this problem we are using map so the space complexity is O(N)
