#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1001];


int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int node;
    cin>>node;
    int cnt=0;
    for(auto x : adj_list[node]){
        cnt++;

    }
    cout<<cnt<<endl;
   
    return 0;
}