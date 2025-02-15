#include<bits/stdc++.h>
using namespace std;
char grid[8][8];
bool vis[8][8];
int level [8][8];
int n,m;

vector<pair<int,int>> d={{-2,-1},{-2,1},{2,-1},{2,1},
{-1,-2},{-1,2},{1,-2},{1,2}};

bool valid(int i,int j){
    if(i<0 || i>=n || j>=m||j<0)
        return false;
    return true;
}

void bfs(int si,int sj){
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    level[si][sj]=0;
    while(!q.empty()){
        pair<int,int>par=q.front();
        q.pop();
        int par_i=par.first;
        int par_j=par.second;


        cout<<par_i<<" "<<par_j<<endl;
        

        for(int i=0;i<8;i++){
            int ci,cj;
            ci=par_i+d[i].first;
            cj=par_j+d[i].second;
            if(valid(ci,cj) && !vis[ci][cj]){
               q.push({ci,cj});
               vis[ci][cj]=true;
               level[ci][cj]=level[par_i][par_j]+1;
            }
        }
    }
}
int main(){
    
    n=8;
    m=8;

    string source,destination;
    cin>>source>>destination;
    int si=source[1]-'1';
    int sj=source[0]-'a';

    int di=destination[1]-'1';
    int dj=destination[0]-'a';

    // cout<<si <<"si"<<sj<<endl;
    // cout<<di<< "di"<< dj<<endl;


  
   
   memset(vis,false,sizeof(vis));
   memset(level,-1,sizeof(level));
   bfs(si,sj);

   cout<<"level->"<<level[di][dj];


    return 0;
}