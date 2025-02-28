#include<bits/stdc++.h>
using namespace std;
char mat[1001][1001];
bool vis[1001][1001];

pair<int,int> parent[1001][1001];

vector<pair<int,int>> mv={{0,1},{0,-1},{1,0},{-1,0}};

int n,m;

bool valid(int i,int j){

    if(i<0 || j<0 || i>=n||j>=m)
        return false;
    else
        return true;    


}

void bfs(int sr, int sc){
    vis[sr][sc]=true;

    queue<pair<int ,int>> q;
    q.push({sr,sc});

    while(!q.empty()){
        pair<int,int> par=q.front();
        q.pop();
        int par_i=par.first;
        int par_j=par.second;

        for(int i=0;i<4;i++){
            int ci=par_i+mv[i].first;
            int cj=par_j+mv[i].second;

           

            if(valid(ci,cj) && !vis[ci][cj] && mat[ci][cj]!='#'){
                q.push({ci,cj});
                vis[ci][cj]=true;
                parent[ci][cj]={par_i,par_j};
                
            }
        }
    }

}
int main(){

    cin>>n>>m;
    int sr,sc;
    int dr,dc;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='R'){
                sr=i;
                sc=j;
            }
            else if(mat[i][j]=='D'){
                dr=i;
                dc=j;
            }

        }
    }

    memset(vis,false,sizeof(vis));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            parent[i][j]={-1,-1};
        }
    }
 
    bfs(sr,sc);

    int x=dr;
    int y=dc;

    if(vis[dr][dc]){
    while (1)
    {
        if(mat[sr][sc]==mat[x][y]){
            break;
        }
        if(mat[x][y]=='.'){
            mat[x][y]='X';
        }
        pair<int ,int>par=parent[x][y];
        x=par.first;
        y=par.second;

    }
}
    

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j];
        }
        cout<<endl;
    }

   


    return 0;
}