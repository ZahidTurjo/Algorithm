#include<bits/stdc++.h>
using namespace std;
int grp_size[1005];
int par[1005];
int cmp;
int mx;
int find_leader(int node){
    if(par[node]==-1){
        return node;
    }
    int leader=find_leader(par[node]);
    par[node]=leader;
    return leader;
}
void dsu_union(int node1,int node2){
    int leader1=find_leader(node1);
    int leader2=find_leader(node2);
    if(leader1==leader2){
        return ;
    }
    if(grp_size[leader1]>=grp_size[leader2]){
        par[leader2]=leader1;
        grp_size[leader1]+=grp_size[leader2];
        mx=max(mx,grp_size[leader1]);
    }else{
        par[leader1]=leader2;
        grp_size[leader2]+=grp_size[leader1];
        mx=max(mx,grp_size[leader2]);
    }
    cmp--;

}
int main(){
    int n,e;
    cin>>n>>e;
    memset(par,-1,sizeof(par));
    for(int i=0;i<=n;i++){
        grp_size[i]=1;
    }
    cmp=n;
    mx=1;
    while(e--){
        int a,b;
        cin>>a>>b;
        dsu_union(a,b);
        cout<<cmp<<" "<<mx<<endl;
    

    }





    return 0;
}