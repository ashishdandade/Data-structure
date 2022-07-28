class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mp;
        for(auto &x:nums){
            mp[x]++;
        }
        for(auto &p:mp){
            if(p.second<2){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};
// TC:O(LogN)
// SC:O(N)
// -----------------------------------------optimal approch--------------------------------------------

 class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xors=0;
        int n=nums.size();
  
        for(int i=0;i<n;i++){
            xors^=nums[i];
        }
        int mask=1;
        while(mask){
            if((xors & mask)==0){
                mask=mask<<1;
            }
            else{
                break;
            }
        }
        int pos1=0;
        int pos2=0;
        for(int i=0;i<n;i++){
            if(nums[i]&mask){
                pos1^=nums[i];
                
            }
            else{
                pos2^=nums[i];
                
            }
        }
        return {pos1,pos2};
    }
};
// TC:O(N)
// SC:O(1)
