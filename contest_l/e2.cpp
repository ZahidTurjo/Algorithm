#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;

    map<long long,long long> arr;
    while(q--){
        int query;
        cin>>query;
        if(query ==1){
            long long x;
            cin>>x;
            arr[x]++;
        }else{
            if(arr.empty()){
                cout<<"empty\n";
            }else{
                cout<<arr.begin()->first<<"\n";
                arr.erase(arr.begin());
            }
        }

    }
    




    return 0;
}