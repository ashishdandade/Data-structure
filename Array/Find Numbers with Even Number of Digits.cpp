class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++){
           string num = to_string(nums[i]);
            if(num.size()%2==0){
                count++;
            }
        }
        return count;
        
    }
};
//another approch
//and if number size is even then count 
