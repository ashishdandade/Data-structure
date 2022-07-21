class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int sum=0;
        int shortest=INT_MAX;
        while(right<n){
            sum+=nums[right];
            if(sum>=target){
                while(sum>=target){
                    //skip all the element whoose sum < than the target 
                    sum-=nums[left];
                    left++;
                }
                shortest=min(shortest,right-left+2);//update smallest window size
            }
            right++;
        }
        return shortest==INT_MAX?0:shortest;
        
    }
};
