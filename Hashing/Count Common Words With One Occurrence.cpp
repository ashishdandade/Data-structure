class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>m1,m2;
        int count=0;
        for(int i=0;i<words1.size();i++){
            m1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++){
            m2[words2[i]]++;
        }
         for(string word:words1)
        {
            if(m1[word]==1 && m2[word]==1)
                count++;
        }
        return count;
    }
};
