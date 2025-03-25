#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>=0){
        if(t%3==0){
            cout<<"YES"<<endl;
            return 0;
        }
        if(t%4==0){
            cout<<"YES"<<endl;
            return 0;
        }
        t=t-3;
    }
    cout<<"NO"<<endl;

    return 0;
}