// Running Sum 1d

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];							
        }
        return nums;
        
    }
};
// Defanging an IP Address
class Solution {
public:
    string defangIPaddr(string address) {
        string res;
        for(auto c:address){
            if(c=='.'){
                res+="[.]";
            }
            else
                res+=c;
        }
        return res;
        
    }
};
// suffle the array
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int j=n;
        for(int i= 0;i<n; i++,j++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
               

        }
        return ans;
        
    }
};

// kids with gretest candies
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int mx=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=mx){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
//NO of good pair
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=mp[nums[i]];
            mp[nums[i]]++;
        }
        return total;
    }
};
//jewals and stones
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int nums=0;
        for(int i=0;i<jewels.size();++i){
            nums+=count(stones.begin(), stones.end(), jewels[i]);
        }
        return nums;
    }
};
// How Many Numbers Are Smaller Than the Current Number
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(j!=i and nums[i]>nums[j])
                    count++;
                
                
            }
            ans.push_back(count);
            count=0;
        }
        return ans;
        
    }
};
