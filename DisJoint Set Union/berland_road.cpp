#include<bits/stdc++.h>
using namespace std;
int grp_size[1005];
int par[1005];
int cnt;

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
   
    if(grp_size[leader1]>=grp_size[leader2]){
        par[leader2]=leader1;
        grp_size[leader1]+=grp_size[leader2];
       
    }else{
        par[leader1]=leader2;
        grp_size[leader2]+=grp_size[leader1];
        
    }
   

}
int main(){
    int n;
    cin>>n;
    int e=n-1;
    memset(par,-1,sizeof(par));
    for(int i=1;i<=n;i++){
        grp_size[i]=1;
    }
    cnt=0;
    vector<pair<int,int>> rm;
    vector<pair<int,int>> cn;
    while(e--){
        int a,b;
        cin>>a>>b;
       if(find_leader(a)!=find_leader(b)){
        dsu_union(a,b);
       }else{
            rm.push_back({a,b});
       }

    }
    for(int i=2;i<=n;i++){
        int leader1=find_leader(1);
        int leader2=find_leader(i);
        if(leader1!=leader2){
            dsu_union(1,i);
            cn.push_back({1,i});
        }
    }
       cout<<rm.size()<<endl;

       for(int i=0;i<rm.size();i++){
        cout<<rm[i].first<<" "<<rm[i].second<<" "<<cn[i].first<<" "<<cn[i].second<<endl;
       }



    return 0;
}