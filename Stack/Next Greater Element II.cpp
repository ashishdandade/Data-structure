class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(nums.size(),-1);
        stack<int> s;
    
        for(int i = 0;i < 2*n;i++){
            int el = nums[i % n];
            while(!s.empty() && el > nums[s.top()]){
                res[s.top()] = el;
                s.pop();
                
            }
            if(i < n)
            s.push(i);
        }
        return res;
    }
};
