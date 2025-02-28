#include<bits/stdc++.h>
using namespace std;
char grid[1000][1000];
bool vis[1000][1000];
int n,m;

int cnt;
vector<pair<int,int>> mv={{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i, int j){
    return !(i<0 || i>=n || j<0 || j>=m);
}

void dfs(int sr,int sc){
    vis[sr][sc]=true;
    cnt++;

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
        cnt=0;
        cin>>grid[i][j];

        
    }
   }

   memset(vis,false,sizeof(vis));

   int min_cnt=INT_MAX;

   int flag=0;

   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(!vis[i][j] && grid[i][j]=='.'){
            cnt=0;
            dfs(i,j);
            min_cnt=min(min_cnt,cnt);
            flag=1;
            
        }
    }
   }

   if(flag==0){
    cout<<-1<<endl;
   }else{
    cout<<min_cnt<<endl;
   }

 

    return 0;
}