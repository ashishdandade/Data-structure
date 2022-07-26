// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>mem(n+1);
        mem[0]=0;
        for(int i=1;i<=n;i++){
            mem[i]=mem[i/2]+i%2;
        }
        return mem;
    }
};
