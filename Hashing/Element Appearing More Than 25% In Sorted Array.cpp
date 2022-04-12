class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int max=0;
        int ans=0;
        for(auto x:mp){
            if(x.second>max){
               max=x.second;
                ans=x.first;
            }
        }
        return ans;
        
    }
};
