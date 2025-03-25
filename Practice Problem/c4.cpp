#include<bits/stdc++.h>
using namespace std;
int main(){

   
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.rbegin(),a.rend());
    long long res=a[0];
    for(int i=1;i<n;i++){
        a[i]=min(a[i-1]-1,a[i]);
        res+=a[i];
        if(a[i]==0){
            break;
        }
    }
    cout<<res<<endl;


    return 0;
}