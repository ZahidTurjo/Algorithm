#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1001];
bool vis[1001];
int level[1001];
void bfs(int src){
    queue<int> q;
    q.push(src);
    level[src]=0;

    vis[src]=true;

    while(!q.empty()){
        int par=q.front();
        q.pop();

        for(auto child:adj_list[par]){
            if(!vis[child]){
                q.push(child);
                level[child]=level[par]+1;
                vis[child]=true;
            }

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
    
    int t;
    cin>>t;
    while(t--){
        int src,dst;
        cin>>src>>dst;
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        bfs(src);

        

            cout<<level[dst]<<endl;
       

    }

    return 0;
}