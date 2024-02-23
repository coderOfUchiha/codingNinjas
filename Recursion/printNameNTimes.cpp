#include<bits/stdc++.h>
using namespace std;
int cnt =0;
void print(int n){
    
    if(cnt==n){
        return;
    }
    cnt++;
    cout<<"Tariq"<<endl;
    print(n);
    
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;

    print(n);
}