class Solution {
 
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int c = 3;
        while(mat != target && c>0) {
            for(int i=0;i<mat.size();i++) {
                for(int j=i;j<mat.size();j++) {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            for(int i=0;i<mat.size();i++) {
                reverse(mat[i].begin(), mat[i].end());
            }
            c--;
        }
        if(mat==target)
            return true;
        return false;
    }
};
// We will check only for 90, 180 and 270 degree because after one more rotation,.
