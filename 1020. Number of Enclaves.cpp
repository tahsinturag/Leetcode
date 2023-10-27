class Solution {
public:
    int m,n;
    void dfs(vector<vector<int>> &grid, int i, int j){
        if (i<0 || i>=m ||j<0||j>=n||grid[i][j]==0)
        return;
        grid[i][j]=0;
        dfs(grid, i, j-1);//left
        dfs(grid, i, j+1);//right
        dfs(grid, i-1, j);//down
        dfs(grid, i+1, j);//up






    }
    int numEnclaves(vector<vector<int>>& grid) {
        m= grid.size();
        n= grid[0].size();
        //1st and last column e dfs
        for(int row=0; row<m; row++){
            //1st col
            if(grid[row][0]==1){
                dfs(grid,row,0);
            }
            //2nd col
              if(grid[row][n-1]==1){
                dfs(grid,row,n-1);
            }
        }




        //1st and last row e dfs
        for (int row=0; row<n; row++){
            //first row
            if(grid[0][row]==1){
                dfs(grid,0,row);
            }
           
             //last row
            if(grid[m-1][row]==1){
                dfs(grid,m-1,row);
            }
        }
        int count=0;
        for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                if (grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
