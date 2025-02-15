#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[1001];

int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);

    }
    
    int t;
    cin>>t;
    while(t--){
       
        int src,dst;
        cin>>src>>dst;
        
        if(src==dst){
            cout<<"YES"<<endl;
            continue;
            
        }
    
        int flag=0;
        for(int child:adj_list[src]){ 
            if(child == dst){
                flag=1;

            }

        }


        if(flag==1)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
      

    }

   

    return 0;
}