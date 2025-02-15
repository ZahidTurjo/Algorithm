#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin>>n>>e;
   vector<pair<int,int>> ed_list;
   while(e--){
    int a,b;
    cin>>a>>b;
    ed_list.push_back({a,b});

   }
   for(int i= 0;i<n;i++){
    cout<<ed_list[i].first<<" "<<ed_list[i].second<<endl;

   }

    return 0;
}