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
    
    int t;
    cin>>t;
    while(t--){
       
        int src;
        cin>>src;
        
        vector<int> v;

        if(adj_list[src].empty()){
            cout<<-1<<endl;
            continue;
        }

        for(int x: adj_list[src]){
            v.push_back(x);
        }
        sort(v.begin(),v.end(),greater<>());

        for(int val: v){
            cout<<val<<" "; 
        }

        cout<<endl;
            
    }
    

   

    return 0;
}