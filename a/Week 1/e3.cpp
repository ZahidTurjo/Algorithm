#include<bits/stdc++.h>
using namespace std;
char mat[1001][1001];
bool vis[1001][1001];

vector<pair<int,int>> mv={{0,1},{0,-1},{1,0},{-1,0}};

int n,m;

bool valid(int i,int j){

    if(i<0 || j<0 || i>=n||j>=m)
        return false;
    else
        return true;    


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
    int sr,sc;
    int dr,dc;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
            if(mat[i][j]=='A'){
                sr=i;
                sc=j;
            }
            else if(mat[i][j]=='B'){
                dr=i;
                dc=j;
            }

        }
    }

    memset(vis,false,sizeof(vis));
    dfs(sr,sc);

    if(vis[dr][dc]){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}