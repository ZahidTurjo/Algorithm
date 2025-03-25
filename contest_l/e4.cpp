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


    int stay=n;
    while(h>0 && stay>0){
        long long mx_health=0;
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                arr[i]--;
                if(arr[i]==0){
                    stay--;
                }
                mx_health=max(mx_health,(long long)arr[i]);
            }
        }
        if(stay==0){
            cout<<"Hablu\n";
            return 0;
        }
       
        h=h-mx_health;
        if(h<1){
            cout<<"Dablu\n";
            return 0;
        }
    }

   

    return 0;
}