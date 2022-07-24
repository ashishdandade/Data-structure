// Example 1:

// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6
// Explanation: [1,1,1,0,0,1,1,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
  
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int countZeros=0; int start=0; int maxSize=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                countZeros++;
            }
            while(countZeros>k){
                if(nums[start]==0){
                    countZeros--;
                }
                start++;
            }
            maxSize=max(maxSize,i-start+1);
        }
        return maxSize;
    }
};
// timeO(N)
// space O(N)
