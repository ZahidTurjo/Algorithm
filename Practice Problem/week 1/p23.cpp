#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];
void dfs(int src){
   
    vis[src]=true;
    for(auto child: adj_list[src]){
        if(!vis[child]){
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

   
  
    vector<int> cmp;
    for(int i=0;i<n;i++){
        if(!vis[i]){
           
            memset(vis,false,sizeof(vis));
            dfs(i);
            int cnt=0;
            for(int j=0;j<n;j++){
             if(vis[j]){
                cnt++;
                
             }
            }
            cmp.push_back(cnt);
            
        }
    }
    sort(cmp.begin(),cmp.end());
  for(int x: cmp){
    cout<<x<<" ";
  }


    return 0;
}