#include<bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
int n,m;

vector<pair<int,int>> mv={{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i, int j){
    return !(i<0 || i>=n || j<0 || j>=m);
}

void dfs(int sr,int sc){
    vis[sr][sc]=true;

    for(int i=0;i<4;i++){
        int cr=sr+mv[i].first;
        int cc=sc+mv[i].second;

        if(valid(cr,cc) && !vis[cr][cc] && grid[cr][cc]=='.'){
            dfs(cr,cc);
        }
    }

}
int main(){
   cin>>n>>m;
   
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        
        cin>>grid[i][j];
        
    }
   }

   memset(vis,false,sizeof(vis));

   int sr,sc; 
   cin>>sr>>sc;
   
   int dr,dc; 
   cin>>dr>>dc;



  dfs(sr,sc);

  
  
   if(vis[dr][dc]){
    cout<<"YES"<<endl;
   }else{
    cout<<"N0"<<endl;
   }


    return 0;
}