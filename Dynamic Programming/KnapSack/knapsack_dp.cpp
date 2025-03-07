#include<bits/stdc++.h>
using namespace std;
int val[1005];
int weight[1005];
int dp[1005][1005];
int knapscak(int i,int mx_wt){
    if(i<0 || mx_wt<=0){
        return 0;
    }
    if(dp[i][mx_wt]!=-1){
        return dp[i][mx_wt];
    }
    if(weight[i]<=mx_wt){
        int op1=knapscak(i-1,mx_wt-weight[i])+val[i];
        int op2=knapscak(i-1,mx_wt);
       
        dp[i][mx_wt]=max(op1,op2);
        return dp[i][mx_wt];
    }else{
        dp[i][mx_wt]=knapscak(i-1,mx_wt);
        return dp[i][mx_wt];
    }

}
int main(){
    int n,mx_wt;
    cin>>n;
 

    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    cin>>mx_wt;

    for(int i=0; i<=n; i++){
        for(int j=0; j<=mx_wt; j++){
            dp[i][j] = -1;
        }
    }
    
    cout<<knapscak(n-1,mx_wt)<<endl;

    return 0;
}