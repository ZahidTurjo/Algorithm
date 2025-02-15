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
int dfs(int sr,int sc){
    vis[sr][sc]=true;
    int cmp=1;
    for(int i=0;i<4;i++){
        
        int cr=sr+mv[i].first;
        int cc=sc+mv[i].second;

        if(valid(cr,cc) && !vis[cr][cc] && mat[cr][cc]=='.'){
           cmp+=dfs(cr,cc);
        }
    }

    return cmp;


}
int main(){

    cin>>n>>m;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];

        }
    }

    memset(vis,false,sizeof(vis));

    vector<int>v;
     
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='.' && !vis[i][j] ){
                
                    int cnt=dfs(i,j);
                    v.push_back(cnt);
               
            }

        }
    }

    if(v.empty()){
        cout<<0<<endl;
    }else{
        sort(v.begin(),v.end());
    
        for(int x:v){
            cout<<x<<" ";
        }
    }

    


    return 0;
}