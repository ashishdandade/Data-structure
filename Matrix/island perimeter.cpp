class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int perimeter=0;
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                if(grid[i][j]==0) continue;
                perimeter+=4;
                if(i>0) perimeter -=grid[i-1][j];
                if(j>0) perimeter -=grid[i][j-1];
                if(i<r-1) perimeter -=grid[i+1][j];
                if(j<c-1) perimeter -=grid[i][j+1];
            }
        }
        return perimeter;
    }
};
