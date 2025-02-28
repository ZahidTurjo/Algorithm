#include<bits/stdc++.h>
using namespace std;
int n,m;
int par[100000+5];
int group_size[100000+5];
int mx_size;

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
         mx_size=max(mx_size,group_size[leader1]);
        
    }else{
        par[leader1]=leader2;
        group_size[leader2]+=group_size[leader1];
        mx_size=max(mx_size,group_size[leader2]);
       
    }
  
  
    
}
int main(){
   
   
    cin>>n>>m;
    dsu_init(n);

    int cmnts=n;
    mx_size=1;
    while(m--){
        int a,b;
        cin>>a>>b;
        int leader1=find_leader(a);
        int leader2=find_leader(b);
        if(leader1!=leader2){
            dsu_union(a,b);
            cmnts--;
            

        }
        cout<<cmnts<<" "<<mx_size<<endl;
        

    }




    return 0;
}