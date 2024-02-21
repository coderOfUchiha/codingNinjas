#include<bits/stdc++.h>
using namespace std;
void print( int i, int n){
    if(n<i)return;
    print(i, n-1);
    cout<<n<<endl; 
}
int main(){
    int i,n;
    cin>>n>>i;
    print(i,n);
}