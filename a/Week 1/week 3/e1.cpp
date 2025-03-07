#include<bits/stdc++.h>
using namespace std;
int n ,e;
long long dis[1001];
bool cycle=false;
class Edges
{
    public:
    int a,b;
    long long c;
    Edges(int a, int b,long long c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
vector<Edges>edge_list;
void bellman(){
    for(int i=1;i<=n-1;i++){
        for(auto ed:edge_list){
            int a=ed.a;
            int b=ed.b;
            long long wt=ed.c;

            if(dis[a]!=1e18 && dis[a]+wt<dis[b]){
                dis[b]=dis[a]+wt;
            }
        }
    }

    for(auto ed:edge_list){
        int a=ed.a;
        int b=ed.b;
        int wt=ed.c;

        if(dis[a]!=1e18 && dis[a]+wt<dis[b]){
            dis[b]=dis[a]+wt;
            cycle=true;
            break;
        }
    }



}
int main(){
    cin>>n>>e;
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;
        edge_list.push_back(Edges(a,b,c));

    }
    int src;
    cin>>src;
    for(int i=1;i<=n;i++){
        dis[i]=1e18;
    }
    dis[src]=0;
    bellman();
  
    int t;
    cin>>t;

    if(cycle){
        cout<<"Negative Cycle Detected"<<endl;
    }else{
        while(t--){
            int d;
            cin>>d;
            if(dis[d]==1e18){
                cout<<"Not Possible"<<endl;
            }else{
                cout<<dis[d]<<endl;
            }
        }
    }

   

   


    return 0;
}