#include<bits/stdc++.h>
using namespace std;
char mat[1001][1001];
bool vis[1001][1001];

vector<pair<int,int>> mv={{0,1},{0,-1},{1,0},{-1,0}};

int n,m;

bool valid(int i, int j) {
    return !(i < 0 || j < 0 || i >= n || j >= m);
}

void dfs(int sr,int sc){
    vis[sr][sc]=true;
    for(int i=0;i<4;i++){
        
        int cr=sr+mv[i].first;
        int cc=sc+mv[i].second;

        if(valid(cr,cc) && !vis[cr][cc] && mat[cr][cc]!='#'){
            dfs(cr,cc);
        }
    }


}
int main(){

    cin>>n>>m;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];

        }
    }

    memset(vis,false,sizeof(vis));

    int cnt=0;
     
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]!='#'){
                if(!vis[i][j]){
                    dfs(i,j);
                    cnt++;
                }   
            }

        }
    }

    cout<<cnt<<endl;


    


    return 0;
}