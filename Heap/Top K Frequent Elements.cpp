class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>>pq;
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            pq.push(make_pair(x.second,x.first));
        }
       int a=0;
        while(a<k){
            ans.push_back(pq.top().second);
            pq.pop();
            a++;
        }
        return ans;
    }
};
