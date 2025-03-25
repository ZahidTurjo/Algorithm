#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;
    cin>>n>>q;
    vector<long long>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>prefixSum(n);
    prefixSum[0]=arr[0];
    for(int i=1;i<n;i++){
        prefixSum[i]=prefixSum[i-1]+arr[i];
    }
    
    
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
       if(l==0){
        cout<<prefixSum[r]<<endl;
       }else{
        cout<<prefixSum[r]-prefixSum[l-1]<<endl;
       }
    }
    

    return 0;
}