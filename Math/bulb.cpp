class Solution {
public:
    int bulbSwitch(int n) {
           int left=0;
           int right=n/2+1;
           int cnt=0;
        while(left<=right){
            long mid=left+(right-left)/2;
            if(mid*mid<=n){
                left=mid+1;
                cnt=mid;
            }
            else{
                right=mid-1;
            }
        }
        return cnt;

    }
};
