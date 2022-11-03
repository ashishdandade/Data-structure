class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i]; 
        }
         double val=(sum/(double)k);
        if(val>=threshold)cnt++;
      //SLIDING WINDOW
        for(int i=0;i<arr.size()-k;i++){
            int j=i+k;
            sum-=arr[i];
            sum+=arr[j];
            val=(sum/(double)k);
        if(val>=threshold)cnt++;
        }
        return cnt;
    }
};
// TC O(N)
// SC O(1)
