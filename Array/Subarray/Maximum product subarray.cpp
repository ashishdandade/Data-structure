class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx_overall=nums[0];
        int mx_ending_here=nums[0];
        int mn_ending_here=nums[0];
        for(int i=1;i<nums.size();++i){
            int temp=mx_ending_here;
             mx_ending_here = max({nums[i], nums[i]*mx_ending_here, nums[i]*mn_ending_here}); 
             mn_ending_here = min({nums[i], nums[i]*temp, nums[i]*mn_ending_here});
            mx_overall = max(mx_overall, mx_ending_here);
        }
        return mx_overall;
    }
};
// time O(N)
// space O(N)
