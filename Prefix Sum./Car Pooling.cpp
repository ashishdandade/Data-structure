class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>mp;
        for(int i=0;i<trips.size();i++){
            mp[trips[i][1]]+=trips[i][0];//picking the passangers at the start position
            mp[trips[i][2]]-=trips[i][0];//dropping the passanger at the destination
        }
        for(auto &x:mp){
            capacity-=x.second;
            if(capacity<0){  ///check the capacity limit 
                return false;
            }
        }
        return true;
    }
};
// time O(N)
// space O(N)
