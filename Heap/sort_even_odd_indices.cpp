problem link: https://leetcode.com/problems/sort-even-and-odd-indices-independently/
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        priority_queue<int>mxhp;
        priority_queue<int ,vector<int>,greater<int>>mnhp;
        
        for(int i=0;i<n;){
            mnhp.push(nums[i]);
            i=i+2;
        }
        for(int i=1;i<n;){
            mxhp.push(nums[i]);
            i=i+2;
        }
       int i=0;
        while(i<n){
            if(i%2==0){
                nums[i]=mnhp.top();
                mnhp.pop();
            }
            else {
                nums[i]=mxhp.top();
                mxhp.pop();
            }
            i++;
        }
        return nums;
        
    }
};
