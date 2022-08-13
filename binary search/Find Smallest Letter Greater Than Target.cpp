class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0;
        int r=letters.size()-1;
        int n=letters.size();
        if(target>=letters[n-1]) return letters[0];
        int ans=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(letters[mid]>target){
                r=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        return letters[ans];
    }
};
