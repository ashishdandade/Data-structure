class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>max_end(26,0);
        for(int i=0;i<s.length();i++){
            max_end[s[i]-'a']=i;//last occurence of each character
        }
        vector<int>res;
        int start=0;
        int end=0;
        for(int i=0;i<s.length();i++){
            end=max(end,max_end[s[i]-'a']);
            if(i==end){ //cheack the occurence of each character is included 
                res.push_back(i-start+1);
                start=i+1;
            }
        }
        return res;
        
    }
};
