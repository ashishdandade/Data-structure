class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>output;
        if(n<1){
            return output;
        }
         int product=1;
        for(int i=0;i<n;i++){
            product*=nums[i];
            output.push_back(product);
        }
          product=1;
//       traversse the array from right to left
        for(int i=n-1;i>0;--i){
            output[i]=output[i-1]*product;
            product*=nums[i]; //update the product from original arr 
        }
        output[0]=product;
        return output;
    }
};
// time complexityo(n)
// space complexity o(1)
