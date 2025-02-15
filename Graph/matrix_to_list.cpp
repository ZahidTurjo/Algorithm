#include<bits/stdc++.h>
using namespace std;
void mat_to_list(int mat[][100],int n){
    vector<int> adj_list[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]==1){
                adj_list[i].push_back(j);
            }

        }
    }
        for(int i=0;i<n;i++){
            cout<<i<<" -> ";
            for(auto x: adj_list[i]){
                cout<<x<<" ";

            }
            cout<<endl;
        }


}
int main(){
    int n;
    cin>>n;
    int mat [100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    mat_to_list(mat,n);


    return 0;
}