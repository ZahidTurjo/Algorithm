#include<bits/stdc++.h>
using namespace std;

int n,m;

char map_wr[1001][1001];
bool vis[1001][1001];

vector<pair<int,int>> d={{0,1},{0,-1},{1,0},{-1,0}};

bool valid(int i, int j) {
    return !(i < 0 || j < 0 || i >= n || j >= m);
}

void dfs(int sr,int sc){
      cout<<sr<<" "<<sc<<endl;;
      vis[sr][sc]=true;

      for(int i=0;i<4;i++){

        int cr=sr+d[i].first;
        int cc=sc+d[i].second;
       
        if(valid(cr,cc) && !vis[cr][cc] && map_wr[cr][cc] !='~' ){
            dfs(cr,cc);
          }
        }
}
int main(){
    
   cin>>n>>m;

for (int i=0; i < 5; i++) {
    for (int j=0; j < 8; j++) {
        cin>>map_wr[i][j];
    }
}



memset(vis,false,sizeof(vis));
int cnt=0;
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(!vis[i][j] && map_wr[i][j]!='~'){
            dfs(i,j);
            cnt++;
            
        }
      }
   }
  cout<<endl;
  cout<<"Number of elements "<<cnt<<endl;


    return 0;
}