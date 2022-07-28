class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>count(nums.size(),0);
        int index=0;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;               
    }
     for(int i=0;i<count.size();i++){
        if(count[i]>1){
            index=i;
            break;
        }
    }
    return index;
    }
    
};
// TIME COMPLEXITY:O(N)
// SPACE COMPLEXITY:O(N)
// ------------------------------------------OPTIMAL APPROCH-------------------------------------
  public static int findDuplicate_bs(int[] nums) {
        int len = nums.length;
        int low = 1;
        int high = len - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;
            for (int i = 0; i < len; i++) {
                if (nums[i] <= mid) {
                    cnt++;
                }
            }

            if (cnt <= mid) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
    }
// Time Complexity: O(nlogn)
// Space Complexity: O(1)

// another approch sort the arr and compare previous element
// time o(nlogn)
// space o(nlogn)
