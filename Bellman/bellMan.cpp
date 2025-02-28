#include<bits/stdc++.h>
using namespace std;
class Edge
{
    public:
    int a,b,c;
    Edge(int a,int b, int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
int dis[1005];
vector<Edge> edge_list;
int n,e;
void bellam(){
    for(int i =0;i<n-1;i++){

        for(auto ed:edge_list){
            int a,b,c;
            a=ed.a;
            b=ed.b;
            c=ed.c;
            if(dis[a]!=INT_MAX && dis[a]+c<dis[b]){
                dis[b]=dis[a]+c;
            }
        }
    }

    bool flag=false;
    for(auto ed:edge_list){
        int a,b,c;
        a=ed.a;
        b=ed.b;
        c=ed.c;
        if(dis[a]!=INT_MAX && dis[a]+c<dis[b]){
            dis[b]=dis[a]+c;
            flag=true;
            break;
        }
    }
    
    if(flag){
        cout<<"Nehgative cycle detecteed"<<endl;
    }

}
int main(){


    cin>>n>>e;
   
    while(e--){
        int a,b,c;
        cin>>a>>b>>c;

// 4 4   
// 0 2 5
// 0 3 12
// 2 1 2
// 1 3 3

        edge_list.push_back(Edge(a,b,c));
    

    }
    // for(auto edge:edge_list){
    //     cout<<edge.a<<" "<<edge.b<<" "<<edge.c<<endl;
    // }
    for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
    }
    dis[0]=0;

    bellam();


   for(int i =0;i<n;i++){
    cout<<i<<"->"<<dis[i]<<endl;

   }


    return 0;
}