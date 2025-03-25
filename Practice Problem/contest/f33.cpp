#include<bits/stdc++.h>
using namespace std;
void valid(){
    int n;
    cin>>n;
    vector<long long>arr(n-2);
    long long currSum=0;

    for(int i=0;i<n-2;i++){
        cin>>arr[i];
        currSum+=arr[i];
    }

    long long orginalSum;
    cin>>orginalSum;
    long long missSum=orginalSum-currSum;

    long long cnt;
    if(missSum>=0){
        cnt=missSum+1;
    }else{
        cnt =0;
    }

    cout<<cnt<<endl;


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        valid();
    }



    return 0;
}