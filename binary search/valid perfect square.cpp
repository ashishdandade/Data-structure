//brute force approch
class Solution {
public:
    bool isPerfectSquare(int num) {
        long int i=1;
        for(; i*i<num;i++){
           
        }
         return i*i==num;
    }
};
//biinary search approch
class Solution {
public:
    bool isPerfectSquare( long num) {

         long low=0, high = num, mid=0;
        while(low<=high){
             mid=low+(high-low)/2;
            if(mid*mid<num){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
            return (low*low==num);
        }
};
