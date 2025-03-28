#include<bits/stdc++.h>
using namespace std;
 vector<int> adj_list[1005];
 bool vis[1005];
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty()){

        int par=q.front();
        q.pop();

        cout<<par<<" ";
        for(int child:adj_list[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;

            }
        }
    }


}
void is_visited(){

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
   
   int src,dst;
   cin>>src>>dst;
   bfs(src);
   if(vis[dst]){
    cout<<"yes"<<endl;
   }else{
    cout<<"no"<<endl;
   }

    return 0;
}