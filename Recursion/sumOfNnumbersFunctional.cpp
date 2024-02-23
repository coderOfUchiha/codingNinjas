#include<bits/stdc++.h>
using namespace std;

int sumF(int n){

    if(n==0)return 0;

    return n+sumF(n-1);
}


int main(){
    int n;
    cin>>n;

    cout<<sumF(n);

}