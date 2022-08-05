//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    // Your code goes here
	    stack<int>st;
	    vector<int>ans;
	    int count=0;
	    for(int i=0;i<S.length();i++){
	        if(S[i]=='('){
	            count++;
	            st.push(count);
	            ans.push_back(count);
	        }
	        if(S[i]==')'){
	            int x=st.top();
	            ans.push_back(x);
	            st.pop();
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.barcketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
