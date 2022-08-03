class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0){
            return{1};
        }
        vector<int>res={1,1};
        if(rowIndex==1){
            return res;
        }
        for(int i=2;i<=rowIndex;i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j=1;j<i;j++){
                temp.push_back(res[j]+res[j-1]);
            }
            temp.push_back(1);
            res=temp;
        }
        return res;
    }
};
// ----------------------------Dynamic programming solution-------------------
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>dp;
        vector<int>curr={1};
        dp.push_back(curr);
        if(rowIndex==0) return curr;
        for(int i=1;i<=rowIndex;i++){
            vector<int>curr(i+1);
            for(int j=0;j<curr.size();j++){
                if(j==0|| j==curr.size()-1) curr[j]=1;
                else
                    curr[j]=dp[i-1][j]+dp[i-1][j-1];
            }
            dp.push_back(curr);
            if(i==rowIndex)return curr;
            
        }
        return curr;
    }
    
};
