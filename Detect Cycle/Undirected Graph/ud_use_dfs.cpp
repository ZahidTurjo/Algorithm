#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[101];
bool vis[101];

int parent[101];

bool cycle;

void dfs(int src){
  vis[src]=true;
  cout<<src<<" ";

  for(int child : adj_list[src]){
    if(vis[child] && parent[src]!=child){
        cycle=true;
    }
    if(!vis[child]){
        parent[child]=src;
        dfs(child);
    }
  }

}

int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);


    }
    memset(vis,false,sizeof(vis));
    memset(parent,-1,sizeof(parent));

    cycle=false;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
  for(int x=0;x<n;x++){
    cout<<x<<"->"<<parent[x]<<endl;

  }

  if(cycle){
    cout<<"Cycle Detected"<<endl;
  }else{
    cout<<"NO cycle Detected"<<endl;
  }

    return 0;
}