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
// generally o(n) time and since spaze is o(1)
