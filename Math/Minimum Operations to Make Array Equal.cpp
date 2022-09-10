class Solution {
public:
    int minOperations(int n) {
        int mid=n;
        int ans=0;
        int i=1;
        while(i<n){
            ans=ans+(mid-i);
            i=i+2;
        }
        return ans;
    }

};
