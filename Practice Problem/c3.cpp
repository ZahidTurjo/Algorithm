#include<bits/stdc++.h>
using namespace std;
vector<long long int>dp;
bool canReach(int start,int target){
    if(start ==target) return true;
    if(start>target) return false;
    if(dp[start]!=-1) return dp[start];
    bool l=canReach(start+3,target);
    bool r=canReach(start+4,target);
    dp[start]= l || r;
    return dp[start];
}

int main(){
    int n;
    cin>>n;
    dp.resize(n+5);
    for(int i=0;i<n+5;i++){
        dp[i]=-1;
    }
if(canReach(0,n)){

    cout<<"YES"<<endl;
}else cout<<"NO"<<endl;





    return 0;
}