
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second<=1)
                ans=x.first;
        }
        return ans;
    }
};
// TC:O(N)
// SC: O(N)


// xor solution
// in xor operation if the number is similar then it automatically cancel each other 
// elese return unique number
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(auto &x:nums){
            ans^=x;
        }
        return ans;
    }
};
// TC: O(N)
// SC: O(1)
