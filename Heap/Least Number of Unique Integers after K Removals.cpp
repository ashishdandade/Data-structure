class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>ump;
        for(auto &c:arr){
            ++ump[c];
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto &x:ump){
            pq.push(x.second);
        }
        while(k>0){
            k-=pq.top();
                if(k>=0){
                    pq.pop();
                }
        }
        return pq.size();
    }
};
