#include<bits/stdc++.h>
using namespace std;

int palindrome(int n, int temp){

    if(n ==0) return temp;
    temp = temp*10 + n%10;
    return palindrome(n/10, temp);
}

int main(){

    int n;
    cin>>n;
    int temp = palindrome(n, 0);
    if(temp == n){
        cout<<"Yes";
    }
    else
    {
        cout<<"NO";
    }

}