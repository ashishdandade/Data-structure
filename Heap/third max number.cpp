class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int>pq;
        unordered_set<int>st;
        int k=3;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        
        for(auto it:st){
           pq.push(it);
        }
        if(st.size()<=2){
            return pq.top();
        }
        while(k-1 && pq.size()){
            pq.pop();
            k--;
        }
        return pq.top();
        
    }
};
