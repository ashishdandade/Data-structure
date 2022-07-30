// ---------------------------------------------brute force---------------------------------
// first generate all subset the inset into set,set only return unique subset
class Solution {
    void helper(int i, vector<int> &ds, vector<int> &nums, set<vector<int>> &s) {
        if(i == nums.size()) {
            vector<int> temp = ds;
            sort(temp.begin(), temp.end());
            s.insert(temp);
            return;
        }
        ds.push_back(nums[i]);
        helper(i + 1, ds, nums, s);
        ds.pop_back();
        helper(i + 1, ds, nums, s);
    }
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        set<vector<int>> s;
        helper(0, ds, nums, s);
        
        for(auto i : s) ans.push_back(i);
        
        return ans;
    }
};

// ------------------------------------------optimal Approch-----------------------------
class Solution {
public:
    void callfc(int ind,vector<int>&nums,vector<int>&ds,vector<vector<int>>&ans){
        ans.push_back(ds);//0th index and intially empty
        if(ind==nums.size()) return;
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1])continue;
            ds.push_back(nums[i]);
            callfc(i+1,nums,ds,ans);
            ds.pop_back();
        }
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        callfc(0,nums,ds,ans);
        return ans;
    }
};
