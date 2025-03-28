#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>adj_list[105];

int dis[105];

void dijkstra(int src){

    priority_queue<pair<int ,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push({0,src});
    dis[src]=0;

    while(!pq.empty()){
        pair<int,int> par=pq.top();
        pq.pop();
        int par_dis=par.first;
        int par_node=par.second;


      

        for(auto child: adj_list[par_node]){  //O(V + E )log V
                int child_node=child.first;
                int child_dis=child.second;

                if(par_dis+child_dis <dis[child_node]){
                    dis[child_node]=par_dis+child_dis;
                    pq.push({dis[child_node],child_node});
                }
        }
    }
    



}
int main(){

    int n,e;
    cin>>n>>e;

    while(e--){
        int a,b,c;
        cin>>a>>b>>c;

        adj_list[a].push_back({b,c});
        adj_list[b].push_back({a,c});
        
    }

    // memset(dis,INT_MAX,sizeof(dis));
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }

    dijkstra(0);

    for(int i=0;i<n;i++){
        cout<<i<<"->"<<dis[i]<<endl;
    }


    


    return 0;
}