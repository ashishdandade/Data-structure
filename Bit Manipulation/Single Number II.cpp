class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
         unordered_map<int,int>mp;
        for(auto &x:nums){
            mp[x]++;
        }
        for(auto &p:mp){
            if(p.second==1){
                ans=p.first;
            }
        }
        return ans;
    }
};
// Time Complexity:O(N)
// space Complesity:O(N)
-----------------------------------------------Optimal Approch------------------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[n-1]!=nums[n-2])
            return nums[n-1];
        for(int i=1;i<n-1;i++){
            if(nums[i]!=nums[i+1]&& nums[i]!=nums[i-1])
                return nums[i];
        }
        return -1;
    }
};
// Time Complexity:O(Nlogn)
// space Complesity:O(1)
