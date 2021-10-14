class Solution {
public:
    string truncateSentence(string s, int k) {
        int count=0;
        string str="";
        
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                count++;
            }
            if(count==k)
                break;
            str.push_back(s[i]);
        }
      return str;
        
    }
};
