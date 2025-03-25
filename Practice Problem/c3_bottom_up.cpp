#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<bool>dp(t%10+5,false);
    dp[0]=true;
  
   
    for(int i=3;i<=t%10;i++){
        if( i>=3 && dp[(i-3)%10]==true){
            dp[i]=true;
        }
        if( i>=4 && dp[(i-4)%10]==true){
            dp[i]=true;
        }
    }
   
    if(dp[t%10]){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

    return 0;
}