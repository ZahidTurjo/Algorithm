#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,e;
    cin>>n>>e;
    long long mat[n+1][n+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i ==j)mat[i][j]=0;
            else mat[i][j]=1e18;
        }
    }
    while(e--){
        int a,b,w;
        cin>>a>>b>>w;
        mat[a][b]=min(mat[a][b],(long long)w);


    }

    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if((mat[i][k]!=1e18 && mat[k][j]!=1e18)){
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
    }



    bool cycle=false;
    for(int i=1;i<=n;i++){
      if(mat[i][i]<0){
          cycle=true;
          break;
      }
    }
    if(cycle){
        cout<<-1<<endl;
    }else{

        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
               if(mat[i][j]==1e18)mat[i][j]=-1;
            }
        }

        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            cout<<mat[x][y]<<endl;
        }
    }


    return 0;
}