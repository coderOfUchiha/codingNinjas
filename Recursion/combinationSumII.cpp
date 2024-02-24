void checkCombSum(int ind, int n, vector<int>&arr, int target, vector<vector<int>>&v, vector<int>&temp){
    if(ind == n){
        if(target==0){
            v.push_back(temp);
        } 
        return;
    }
    if(arr[ind]<= target){
        temp.push_back(arr[ind]);
        checkCombSum(ind+1, n, arr, target - arr[ind], v, temp);
        temp.pop_back();
    }
    
    checkCombSum(ind+1, n ,arr,target,v, temp);
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	// Write your code here.
	sort(arr.begin(), arr.end());
    vector<vector<int>>v;
    vector<int>temp;
    int sum =0;
    checkCombSum(0,n,arr,target, v, temp);
    return v;
}
