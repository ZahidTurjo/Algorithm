#include<bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
int n,m;
vector<pair<int,int>> d={{-1,0},{1,0},{0,-1},{0,1}};

bool valid(int i,int j){
    if(i<0 || i>=n || j>=m||j<0)
        return false;
    return true;
}

void dfs(int si,int sj){
     cout<<si<<" "<<sj<<endl;
    vis[si][sj]=true;
 for(int i=0;i<4;i++){
    int ci,cj;
    ci=si+d[i].first;
    cj=sj+d[i].second;
    if(valid(ci,cj) && !vis[ci][cj]){
        dfs(ci,cj);
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
//    for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         cout<<grid[i][j];
//     }
//     cout<<endl;
//    }
   int si,sj;
   cin>>si>>sj;
   memset(vis,false,sizeof(vis));
   dfs(si,sj);


    return 0;
}