#include<bits/stdc++.h>
using namespace std;
int n,m;
int par[100000+5];
int group_size[100000+5];


void dsu_init(int val){
    for(int i=1;i<=n;i++){
        group_size[i]=1;
        par[i]=-1;
    }
}
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
    
    if(group_size[leader1]>=group_size[leader2]){
        par[leader2]=leader1;
        group_size[leader1]+=group_size[leader2];
       
        
    }else{
        par[leader1]=leader2;
        group_size[leader2]+=group_size[leader1];
      
    }
  
  
    
}
int main(){
   
   
    cin>>n>>m;
    dsu_init(n);

  
   
    while(m--){
        int a,b;
        cin>>a>>b;
         int leader1=find_leader(a);
        int leader2=find_leader(b);
       

        if(leader1!=leader2){
            dsu_union(a,b);
            
            

        }
        
        

    }
    int cnt=0;
    vector<pair<int,int>>v;
   for(int node=1;node<=n;node++){
  
    int par_1=find_leader(1);
    int par_node=find_leader(node);
    if(par_1 !=par_node){
        cnt++;
        dsu_union(1,par_node);
        v.push_back({1,par_node});
        

    }
   
   }
   cout<<cnt<<endl;
   for(auto x: v){
    cout<<x.first<<" "<<x.second<<endl;
   }





    return 0;
}