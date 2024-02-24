#include <vector>
#include <algorithm>
void subSum(int ind, int sum, int n, vector<int> &num, vector<int>&ans, vector<int>&store){
	
	if(ind == n){
			ans.push_back(sum);
			return;
	}
	subSum(ind+1,sum+num[ind], n, num, ans, store);
	store.pop_back();
	subSum(ind+1, sum, n, num, ans, store);

}

vector<int> subsetSum(vector<int> &num){
	// Write your code here.	
	vector<int>ans;
	vector<int>store;
	
	subSum(0,0, num.size(), num,ans, store);
	sort(ans.begin(), ans.end());
	return ans;
}