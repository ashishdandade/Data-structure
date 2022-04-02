#include <bits/stdc++.h>
using namespace std;



int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n,W;
	    cin >> n >> W;
	    int val[n];
	    int wt[n];
	    for(int i=0;i<n;i++){
	        cin >> val[i];
	    }
	    for(int i=0;i<n;i++){
	        cin >> wt[i];
	    }
	    int i, w; 
        int dp[n+1][W+1];
        for (i = 0; i <= n; i++) 
        { 
           for (w = 0; w <= W; w++) 
           { 
               if (i==0 || w==0) 
                   dp[i][w] = 0; 
               else if (wt[i-1] <= w) 
                     dp[i][w] = max(val[i-1] + dp[i-1][w-wt[i-1]],  dp[i-1][w]); 
               else
                     dp[i][w] = dp[i-1][w]; 
           } 
        } 
        cout << dp[n][W] << endl;
	}
	return 0;
}
