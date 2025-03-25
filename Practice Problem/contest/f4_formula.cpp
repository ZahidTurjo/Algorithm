#include<bits/stdc++.h>
using namespace std;
long long sum(long long x){
    long long k=x/3;
    return k*(k+1)*3/2;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
 

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<sum(r)-sum(l-1)<<endl;

        // int preR=r/3;
        // long long presumR=3*(preR*(preR+1)/2);

        // int preL=(l)/3;
        // long long presumL=3*(preL*(preL+1)/2);
        // cout<<presumR-presumL<<endl;
    }
    


    return 0;
}