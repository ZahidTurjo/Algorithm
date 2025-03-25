#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    int target;
    cin>>target;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(v[i]==target){
            cout<<i<<endl;
            flag=true;
            break;

        }
    }
    if(flag==false){
        cout<<-1<<endl;
    }



    return 0;
}