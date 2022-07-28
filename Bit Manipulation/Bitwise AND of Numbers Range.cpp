class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            count++;
        }
        return right<<=count;//you can left if you want both are same
    }
};
// since the number is max 32 bit therefor the time complexity is constant O(1)
// space O(1)
