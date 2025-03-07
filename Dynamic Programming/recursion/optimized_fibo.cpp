#include<bits/stdc++.h>
using namespace std;
int memo [1005];
int fibo(int n){
    if(n<2){
        return n;
    }
    if(memo[n]!=-1){
        return memo[n];
    }
    memo[n]=fibo(n-1)+fibo(n-2);
    return memo[n];
}
int main(){
    memset(memo,-1,sizeof(memo));

    int n;
    cin>>n;
    cout<<fibo(n)<<endl;


    return 0;
}