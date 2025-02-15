#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[101];
bool vis[101];

bool path[101];

bool cycle;

void dfs(int src){
  vis[src]=true;
  path[src]=true;
  cout<<src<<" ";

  for(int child : adj_list[src]){
    if(vis[child] && path[child]){
        cycle=true;
    }
    if(!vis[child]){
     
        dfs(child);
       
    }
  }
  path[src]=false;

}

int main(){

    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
        // adj_list[b].push_back(a);


    }
    memset(vis,false,sizeof(vis));
    memset(path,false,sizeof(path));

    cycle=false;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }


  if(cycle){
    cout<<"Cycle Detected"<<endl;
  }else{
    cout<<"NO cycle Detected"<<endl;
  }

    return 0;
}