bool isPalindrome(string s , int start , int end){
    
    while(start<= end){
        if(s[start++]!= s[end--]){
            return false;
        }
    }
    return true;
}
void palindromString(int ind , int n, string s, vector<vector<string>> &ans, vector<string> &temp){

    if(ind == n){

        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<n;i++){

        if(isPalindrome(s, ind, i)){
            temp.push_back(s.substr(ind, i-ind+1));
            palindromString(i+1, n, s , ans, temp);
            temp.pop_back();
        }
    }
    
}
vector<vector<string>> partition(string s) {
    // Write your code here.
    vector<vector<string>> ans;
    vector<string>temp;
    string tmp="";
    palindromString(0, s.length(),s, ans, temp); 
    return ans;


}
