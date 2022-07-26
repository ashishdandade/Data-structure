class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(i>=0 || j>=0){
            int sum=carry;
            if(i>=0) sum+=a[i--]-'0'; //extracting 0 or 1 value from string
            if(j>=0) sum+=b[j--]-'0';
            carry=sum>1?1:0;
            result+=to_string(sum%2); //cheack if the sum is even or not if even take 0 else 1
            
        }
        if(carry) result+=to_string(carry);
        reverse(result.begin(),result.end());
        return result;
    }
};
// TC:O(N)
// SC:O(1)
