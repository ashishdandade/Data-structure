class Solution {
public:
    char findTheDifference(string s, string t) {
       char res=0;
        for(auto &x:s){
            res^=x;
        }
         for(auto &x:t){
            res^=x;
        }
        return res;
    }
};
