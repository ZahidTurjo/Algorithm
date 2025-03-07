#include<bits/stdc++.h>
using namespace std;
int dp[1000];
bool canReach(int start,int target){
    if(start ==target) return true;
    if(start>target) return false;
    if(dp[start]!=-1) return dp[start];
    bool l=canReach(start+5,target);
    bool r=canReach(start*4,target);
    dp[start]= l || r;
    return dp[start];
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<1000;i++){
        dp[i]=-1;
    }
if(canReach(1,n)){

    cout<<"YEs"<<endl;
}else cout<<"NO"<<endl;

for(int i=0;i<18;i++){
    cout<<dp[i]<<endl;
}



    return 0;
}