void checkCombSum(int ind, int n, vector<int>&arr, int target, vector<vector<int>>&v, vector<int>&temp){
    if(ind == n){
        if(target==0){
            v.push_back(temp);
        } 
        return;
    }
    if(arr[ind]<= target){
        temp.push_back(arr[ind]);
        checkCombSum(ind, n, arr, target - arr[ind], v, temp);
        temp.pop_back();
    }
    
    checkCombSum(ind+1, n ,arr,target,v, temp);
}
vector<vector<int>> combSum(vector<int> &ARR, int B)
{
    // Write your code here.
    sort(ARR.begin(), ARR.end());
    vector<vector<int>>v;
    vector<int>temp;
    int sum =0;
    checkCombSum(0,ARR.size(),ARR,B, v, temp);
    return v; 
    
}