#include<bits/stdc++.h>
using namespace std;

void solve(int row, int col, int n, int di[], int dj[], vector<string>&ans, vector<vector<int>>&vis, vector<vector<int>>&mat, string move){
     if(row== n-1 && col == n-1){
        ans.push_back(move);
        return;
    }
    string path="DLRU";
    for(int i=0;i<4;i++){
        int nexti= row+di[i];
        int nextj=  col+dj[i];
        if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && !vis[nexti][nextj]&& mat[nexti][nextj]==1){
            vis[row][col]=1;
            solve(nexti, nextj, n, di, dj, ans, vis, mat, move+path[i]);
            vis[row][col]=0;
        }
    }
    
}

vector<string> mazeSolver (vector<vector<int>> &mat) {
    // Write your code here.
    int n= mat[0].size();
    int di[]={1,0,0,-1};
    int dj[]={0,-1,1,0};
    vector<string>ans;
    vector<vector<int>>vis(n,vector<int>(n,0));
    if(mat[0][0]==1){
        solve(0,0,n,di,dj,ans, vis,mat,"");
    }
    return ans;
}
int main(){
 vector < vector < int >> mat = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
 vector<string> ans= mazeSolver(mat);

 for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
 }
}

