#include <vector>
#include <algorithm>
void uniSubSet(int ind, int n, vector<int>&arr, set<vector<int>>&v, vector<int>&store){
    if(ind == n){
        sort(store.begin(), store.end());
        v.insert(store);
        return;
    }
    store.push_back(arr[ind]);
    uniSubSet(ind+1, n, arr, v, store);
    store.pop_back();
    uniSubSet(ind+1, n, arr, v, store);
}

vector<vector<int>> getUniqueSubsets(vector<int>& arr) {
    // Write Your Code Here 
    set<vector<int>> v;
    vector<vector<int>>ans;
    vector<int>store;
    uniSubSet(0, arr.size(), arr, v, store); 
    for (auto it = v.begin(); it != v.end(); it++) {
      ans.push_back( * it);
    }
    return ans;  
}