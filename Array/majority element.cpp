// brute force o(N) and (N)space for storing key value
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

// optimized o(n) and space constand o(1)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majority=nums[0];
        int count=1;
        for(int i=0;i<n;i++){
            if(nums[i]==majority)
                count+=1;
            else
                count-=1;
                if(count==0){
                    majority=nums[i];
                    count=1;
                }
                    
        }
        return majority;
    }
};
