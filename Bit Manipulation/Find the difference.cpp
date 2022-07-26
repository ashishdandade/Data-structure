
class Solution {
public:
    char findTheDifference(string s, string t) {
         int n = s.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        for(int i=0; i<n; i++) if(s[i]!=t[i]) return t[i];
        return t[n];
        
    }
};
// TC:(nlogn)
// SC:(1)



// efficient approch
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
// TC:(N)
// SC:(1)
