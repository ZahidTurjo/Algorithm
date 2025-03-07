#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            v.push_back(arr[i]);
                      
        }

        sort(v.begin(),v.end(),greater<int>());
        int big_pillar=v[0];
        int big_pillar2=v[1];
        for(int i=0;i<n;i++){
            if(arr[i]== big_pillar || arr[i]==big_pillar2){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }

     

    return 0;
}