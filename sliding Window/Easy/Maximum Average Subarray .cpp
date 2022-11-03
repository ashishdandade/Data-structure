class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
       double avg=0;
        for(int i=0;i<k;i++){
            avg+=nums[i]/1.0/k;
        }
        double maxAvg=avg;
        for(int i=0;i<nums.size()-k;i++){
            int j=i+k;
            avg-=nums[i]/1.0/k;
            avg+=nums[j]/1.0/k;
            if(avg>maxAvg){
                maxAvg=avg;
            }
        }
        return maxAvg;
    }
};
// time complexity :O(N)
// Space complexity:O(1)
// sliding window
