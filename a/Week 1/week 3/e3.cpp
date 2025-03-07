#include<bits/stdc++.h>
using namespace std;

int par[100001];
int grp_size[100001];
int find_par(int node){
    if(par[node]==-1){
        return node;
    }
    int leader=find_par(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2){
    int leader1=find_par(node1);
    int leader2=find_par(node2);
    if(grp_size[leader1]>=grp_size[leader2]){
        par[leader2]=leader1;
        grp_size[leader1]+=grp_size[leader2];
    }else{
        par[leader1]=leader2;
        grp_size[leader2]+=grp_size[leader1];     
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    memset(par,-1,sizeof(par));
    for(int i=1;i<=n;i++){
        grp_size[i]=1;
    }
    int cycle_cnt=0;
    while(e--){
        int a , b;
        cin>>a>>b;
        int par_a=find_par(a);
        int par_b=find_par(b);
        if(par_a!=par_b){
            dsu_union(a,b);
        }
        if(par_a==par_b){
            cycle_cnt+=1;
        }
    }

    cout<<cycle_cnt<<endl;


    return 0;
}