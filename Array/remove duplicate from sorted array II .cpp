class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        
        int res=2;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[i]!=nums[res-2])
                nums[res++]=nums[i];
        }
        return res;
    }
};
