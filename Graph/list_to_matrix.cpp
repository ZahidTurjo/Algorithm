#include<bits/stdc++.h>
using namespace std;
int main(){
      int n,e;
      cin>>n>>e;
      vector<int> adj_list[n];
      while(e--){
         int a,b;
         cin>>a>>b;
         adj_list[a].push_back(b);
         adj_list[b].push_back(a);

      }
      int mat[n][n];
      memset(mat,0,sizeof(mat));

      for(int i=0;i<n;i++){
        for(int x:adj_list[i]){
           mat[i][x]=1;
        }
      }

      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
      }

    return 0;
}