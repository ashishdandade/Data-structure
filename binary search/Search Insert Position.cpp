problem link:- https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0;
        int hi=nums.size()-1;
        int mid=0;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<target){lo=mid+1;}
            else hi=mid-1;
        }
        return lo;
            
        
    }
};
