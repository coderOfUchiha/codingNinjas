void solve(int row, int col, int n, string path, vector<string>&ans, vector<vector<int>>&vis, vector<vector<int>>&mat){
     if(row== n-1 && col == n-1){
        ans.push_back(path);
        return;
    }
    //downward
    if(row+1<n && !vis[row+1][col]&& mat[row+1][col]==1 ){
        vis[row][col]=1;
        solve(row+1,col, n,path+'D',ans,vis,mat );
        vis[row][col]=0;
    }
    //leftward
    if(col-1>=0 && !vis[row][col-1]&& mat[row][col-1]==1){
        vis[row][col]=1;
        solve(row, col-1, n, path+'L',ans, vis, mat);
        vis[row][col]=0;
    }
    //rightwrd
    if(col+1<n && !vis[row][col+1]&& mat[row][col+1]==1){
        vis[row][col]=1;
        solve(row, col+1, n, path+'R',ans, vis, mat);
        vis[row][col]=0;
    }
    //upward
     if(row-1>=0 && !vis[row-1][col]&& mat[row-1][col]==1 ){
        vis[row][col]=1;
        solve(row-1,col, n,path+'U',ans,vis,mat);
        vis[row][col]=0;
    }
}

vector<string> ratMaze(vector<vector<int>> &mat) {
    // Write your code here.
    int n= mat[0].size();
    string path="";
    vector<string>ans;
    vector<vector<int>>vis(n,vector<int>(n,0));
    if(mat[0][0]==1){
        solve(0,0,n,path,ans, vis,mat);
    }
    return ans;
}