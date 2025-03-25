#include<bits/stdc++.h>
using namespace std;
int par[1005];

int group_size[1005];
class Edge{
    public:
    int a,b,c;
    Edge(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }

};


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
bool cmp(Edge l,Edge r){
    return l.c<r.c; 
}
int main(){
    
    memset(par,-1,sizeof(par));
    for(int i=0;i<1005;i++){
        group_size[i]=1;
    }
    int n,e;
    cin>>n>>e;
    vector<Edge>edge_list;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(Edge(a,b,c));
    }
    sort(edge_list.begin(),edge_list.end(),cmp);
    int totalcos=0;
    for(auto ed: edge_list){
       int parA=find(ed.a);
       int parB=find(ed.b);
       if(parA != parB){
        dsu_union(ed.a,ed.b);
        totalcos+=ed.c;
       }
    }
    cout<<totalcos<<endl;
    return 0;
}