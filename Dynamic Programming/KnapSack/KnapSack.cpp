#include<bits/stdc++.h>
using namespace std;
int val[1005];
int weight[1005];
int knapscak(int i,int mx_wt){
    if(i<0 || mx_wt<=0){
        return 0;
    }
    if(weight[i]<=mx_wt){
        int op1=knapscak(i-1,mx_wt-weight[i])+val[i];
        int op2=knapscak(i-1,mx_wt);
        return max(op1,op2);
    }else{
        return knapscak(i-1,mx_wt);
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

    cout<<knapscak(n-1,mx_wt)<<endl;

    return 0;
}