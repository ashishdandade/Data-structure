class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt1=0;
        int cnt2=0;
        int mx1=0;
        int mx2=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                cnt1++;
                if(s[i]!=s[i+1]){
                    mx1=max(mx1,cnt1);
                    cnt1=0;
                }
            }
            if(s[i]=='0'){
                cnt2++;
                if(s[i]!=s[i+1]){
                    mx2=max(mx2,cnt2);
                    cnt2=0;
                }
            }
        }
        if(mx1>mx2){
            return true;
        }
        return false;
    }
};
// TIME:O(N)
// SPACE:O(1)
