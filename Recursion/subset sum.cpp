//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
     void funcsum(int ind,int sum,vector<int>&arr, int N,vector<int>&sumset){
         if(ind==N){
             sumset.push_back(sum);
             return;
         }
         funcsum(ind+1,sum+arr[ind],arr,N,sumset);
         funcsum(ind+1,sum,arr,N,sumset);
     }
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>sumset;
       int sum=0;
        funcsum(0,0,arr,N,sumset);
       
        return sumset;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
