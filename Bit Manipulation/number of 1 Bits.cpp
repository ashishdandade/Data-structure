class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cntSet=0;
        while(n!=0){
            n&=n-1;
            cntSet++;
        }
        return cntSet;
    }
};
// TC:O(N)
// SC:O(1)
