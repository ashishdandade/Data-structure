class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        set<int>s;
        int sum=0;
        int rem=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int x=sum%k;
            if(s.find(x)!=s.end()){
                return true;
                
            }
            s.insert(rem);
            rem=x;
        }
        return false;
    }
};
