#include<bits/stdc++.h>
using namespace std;
int dp[100005];
bool make_it(int start,int target){
    if(start==target){
        return true;
    }
    if(start>target){
        return false;
    }

    if(dp[start]!=-1){
        return dp[start];
    }

    bool l=make_it(start+3,target);
    bool r=make_it(start*2,target);
    dp[start]=l || r;
    return dp[start];
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        for(int i=0;i<100005;i++){
            dp[i]=-1;
        }
        int target;
        cin>>target;
        if(make_it(1,target)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    
    }
    


    return 0;
}