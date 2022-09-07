class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longest=0;
        int mxLgst=1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            else if(nums[i]==nums[i-1]+1) mxLgst++;
            else longest=max(longest,mxLgst),mxLgst=1;
        }
        return max(longest,mxLgst);
    }
};
