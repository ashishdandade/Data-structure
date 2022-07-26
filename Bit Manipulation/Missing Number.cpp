class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xors=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            xors^=nums[i];
        }
        for(int i=0;i<=n;i++){
            xors^=i;
        }
        return xors;
    }
};
// TC:O(N)
// SC:O(1)
