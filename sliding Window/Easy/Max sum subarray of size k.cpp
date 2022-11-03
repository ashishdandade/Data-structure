//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        if(N<K){
            return -1;
        }
        long sum=0;
        for(long i=0;i<K;i++){
            sum+=Arr[i];
        }
        long maxsum=sum;
        for(long i=0;i<N-K;i++){
            long j=i+K;
            sum-=Arr[i];
            sum+=Arr[j];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
        return maxsum;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
