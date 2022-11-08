class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        vector<string>ans;
        if(s.size()<=10){
            return ans;
        }
        for(int i=0;i<=s.size()-10;i++){
            string str=s.substr(i,10);
            mp[str]++;
        }
        for(auto x:mp){
            if(x.second>1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
TC O(N)
SC O(N)
