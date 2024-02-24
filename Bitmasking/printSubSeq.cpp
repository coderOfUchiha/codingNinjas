vector<string> generateSubsequences(string s)
{
    // Write your code here.
    vector<string>v;
    int n= s.length();
    for(int i=0;i< (1<<n);i++){
        string sub="";
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                sub+=s[j];
            }
        }
        v.push_back(sub);
    }
    return v;
}