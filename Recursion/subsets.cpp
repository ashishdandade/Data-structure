// explanation:
// We pass ans array, index, input array(ip), output array(op) to solve function.
// In every function call either we have to take the input to the array or skip that.
// If we skip we simply call the function and increase the index by 1.
// else we include that in op array //op.push_back(ip[i])
// again we call for the next index and after we return we simply pop last element from op
// Base condition: When idx is equal to the size of ip we return.

class Solution {
private:
    void solve (vector<int> nums, vector<int> output, int i, vector<vector<int>>& ans){
         if (i>= nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude case
        solve(nums, output, i+1, ans);
        //include case 
        output.push_back(nums[i]);
        solve(nums, output, i+1,ans);
    }
    
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector<int>> ans;
        vector<int> output;
        int i;
        solve (nums, output, i, ans);
        return ans;
    }
};
// Recursive Solution
// Time complexity : O(N*(2^N))
// Space complexity : O(N*(2^N))
