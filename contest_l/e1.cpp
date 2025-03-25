#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string a,b;
        cin>>a>>b;

        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                cnt++;
            }
        }

        if(cnt<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       

    }


    return 0;
}