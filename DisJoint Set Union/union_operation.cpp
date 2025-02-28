#include<bits/stdc++.h>
using namespace std;
int par[1005];

int group_size[1005];

int find(int node){

    if(par[node]==-1){
        return node;
    }
//  cout<<node<<endl;
 
    int leader=find(par[node]);
    par[node]=leader;
    return leader;
    
}
void dsu_union(int node1, int node2){
    int leader1=find(node1);
    int leader2=find(node2);

    if(group_size[leader1]>=group_size[leader2]){
        par[leader2]=leader1;
        group_size[leader1]+=group_size[leader2];
    }else{
        par[leader1]=leader2;
        group_size[leader2]+=group_size[leader1];       
    }
}
int main(){

    memset(par,-1,sizeof(par));
    for(int i=0;i<1005;i++){
        group_size[i]=1;
    }


    dsu_union(1,2);
    dsu_union(2,0);
    dsu_union(3,1);
    
 

    for(int i=0;i<5;i++){
        cout<<par[i]<<endl;
    }

    for(int i=0;i<4;i++){
        cout<<group_size[i]<<endl;
    }



    return 0;
}