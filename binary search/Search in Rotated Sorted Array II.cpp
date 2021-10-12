problem link:-https://leetcode.com/problems/search-in-rotated-sorted-array-ii/


class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        while(i<=j){
            //avoid duplicates
            while(i<j && nums[i]==nums[i+1])i++;
            while(j>i && nums[j]==nums[j-1])j--;
            //use same technique as used in rotated array
            int m=(i+j)/2;
            if(nums[m]==target)return true;
            if(nums[m]>=nums[i]){
                if(target>=nums[i] && target<nums[m])j=m-1;
                else i=m+1;
            }
            else{
                if(target<=nums[j] && target>nums[m])i=m+1;
                else j=m-1;
            }
        }
        return false;
    }
};
