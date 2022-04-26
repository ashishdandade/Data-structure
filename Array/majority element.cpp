class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int c=nums.size()/2;
    unordered_map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
    }
    for(auto x:mp){
        if(x.second>c)
        return x.first;
    }
    return -1;
        
    }
};
