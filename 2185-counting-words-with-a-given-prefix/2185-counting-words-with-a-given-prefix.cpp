class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res=0;
        for(auto x:words){
            if(x.find(pref)==0)
                res++;
        }
        return res;
    }
};