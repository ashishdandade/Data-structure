class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long sum=0;
        int index=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>s){
                while(sum>s){
                    sum-=arr[index];
                    index++;
                }
            }
            if(sum==s){
                return {index+1,i+1};
            }
        }
        return {-1};
    }
};
