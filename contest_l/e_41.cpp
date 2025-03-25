#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    long long h;
    cin>>n>>h;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
   
    long long total =0;

    for(int i=0;i<n;i++){
        long long turn=arr[i]-1;
        if(turn<=0){
            break;
        }
        total=total+turn;
    }

    if(total>=h){
        cout<<"Dablu\n";
    }else{
        cout<<"Hablu\n";
    }


    return 0;
}