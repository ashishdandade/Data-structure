class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int end=0;
        unordered_set<int>st;
        int mx=0;
        while(start<s.size()){
            if(st.find(s[start])==st.end()){
                mx=max(mx,start-end+1);
                st.insert(s[start]);
                start++;
            }
            else{
                st.erase(s[end]);
                end++;

            }
        }
        return mx;
    }
};
