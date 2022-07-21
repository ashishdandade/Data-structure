class NumArray {
public:
    vector<int>pref;
    NumArray(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++)
            if(i==0){
                pref.push_back(nums[i]);
            }
        else{
            pref.push_back(nums[i]+pref[i-1]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0){
            return pref[right];
        }
        return pref[right]-pref[left-1];
        }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
