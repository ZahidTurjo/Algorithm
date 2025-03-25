#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int q;
    cin>>n>>q;
    vector<long long>seq;
    for(int i=1;i<=n;++i){
        seq.push_back(i);
        seq.push_back(i);
        seq.push_back(i);
    }
 
    vector<long long> prefix(n+1,0);
    
    for(int i=1;i<=n;++i){
        prefix[i]=prefix[i-1]+seq[i-1];
        // cout<<i<<"->"<<prefix[i]<<endl;
    }
    while (q--)
    {
        long long l,r;
        cin>>l>>r;
      
        long long suml;
       
        long long sumr=3*(r/3*(r/3+1)/2);
        
        if(l%3==0){
            suml=3*(l/3*(l/3+1)/2);
            cout<<sumr-suml<<endl;
        }else{
            cout<<prefix[r]-prefix[l-1]<<endl;
        }

        

        
       
         

        // int preR=r/3;
        // int presumR=3*(preR*(preR+1)/2);

        // int preL=(l)/3;
        // int presumL=3*(preL*(preL+1)/2);
        // cout<<presumR-presumL<<endl;
    }
    


    return 0;
}